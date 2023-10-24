#include "gameserver.h"
#include "networkplayer.h"
#include <time.h>
#include <vector>
#include <unordered_set>
#include <set>
#include <iostream>


// Constructor for GameServer class. Initializes log file for game events.
GameServer::GameServer(int numPlayers,QObject *parent)
    : QObject{parent}
{
    this->numPlayers = numPlayers;
    this ->s= new ServerMessageBroker();
    // Initialize log file for game events
    log = new QFile("game_log.txt");
    if (log->open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
    {
        printf("Log opened succesfully\n");
    }
    else
    {
        printf("Failed to open log");
    }
    // QObject::connect(this,&GameServer::portSignal,this->s,&ServerMessageBroker::listen);
    QString d = QString::number(42069);
    logEvent("PORT NUMBER: "+d);
    // emit this->portSignal(42069);
    s->listen(42069);
}

// Destructor for GameServer class. Frees memory allocated for players and log file.
GameServer::~GameServer(){
    // Free memory allocated for players
    for (Player* player : players) {
        delete player;
    }
    players.clear();
    delete winEnvelope;
    // Close log file if it is open
    if (log && log->isOpen())
    {
        log->close();
    }
}

//Get GameID
QString GameServer::GetGameID(){
    return gameID;
}

//Get players vector
QVector<Player*> GameServer::GetPlayers(){
    return players;
}

//Get win envelope
Envelope* GameServer::GetEnvelopeCards(){
    return winEnvelope;
}

// Set the turn for a specific player and calculate available moves based on dice roll.
void GameServer::SetPlayerTurn(Player* inPlayer){
    for (int i = 0; i < players.size(); i++){
        if (inPlayer->GetUsername() == players[i] -> GetUsername()){
            players[i] -> SetMyTurn();
            int pos = players[i]->GetPosition();
            int dice1 = players[i]->RollDice();
            int dice2 = players[i]->RollDice();
            currentDice = dice1+dice2;
            getAvailableMoves(pos,currentDice);
            NetworkPlayer n = NetworkPlayer(players[i]->GetUsername(),players[i]->GetPerson(),players[i]->GetAI());
            QObject::connect(this,&GameServer::NotifyPlayerMoveSignal,this->s,&ServerMessageBroker::notifyPlayerMove);
            emit this->NotifyPlayerMoveSignal(dice1,dice2,n);
        }
    }
}

// End the turn for a specific player.
void GameServer::EndPlayerTurn(Player* inPlayer){
    for (int i = 0; i < players.size(); i++){
        if (inPlayer->GetUsername() == players[i] -> GetUsername()){
            players[i] -> EndMyTurn();
        }
    }
}

// Set the number of players in the game.
void GameServer::setNumPlayers(int num)
{
    this->numPlayers = num;
}

// Get the initial dice values rolled by each player at the start of the game.
QVector<int> GameServer::getStartDice()
{
    return startDice;
}

// Get face-up character cards.
QVector<CharacterCard *> GameServer::getCharacFaceUp()
{
    return characFaceUp;
}

// Get face-up room cards.
QVector<RoomCard *> GameServer::getRoomFaceUp()
{
    return roomFaceUp;
}

// Get face-up weapon cards.
QVector<WeaponCard *> GameServer::getWeaponFaceUp()
{
    return weaponFaceUp;
}

// Recursive function to find possible positions based on current position and dice roll.
void GameServer::findPossiblePositions(int currentPosition, int diceRoll, std::vector<int> &possiblePositions, std::unordered_set<int> &visitedRooms, bool canEnterRoom)
{
    if (currentPosition < 0 || currentPosition >= data.size() || visitedRooms.count(currentPosition) || diceRoll < 0) {
        return;
    }

    // Mark the room as visited
    visitedRooms.insert(currentPosition);
    possiblePositions.push_back(currentPosition);

    // If the current position is a room and the player has already entered a room, stop further exploration in this turn
    if (currentPosition >= 1 && currentPosition <= 9 && !canEnterRoom) {
        return;
    }

    // Recursively explore possible moves
    for (int i = 0; i < 4; ++i) {
        int nextPosition = data[currentPosition][i];
        if (nextPosition != -1) {
            bool nextCanEnterRoom = canEnterRoom || (currentPosition >= 1 && currentPosition <= 9);
            findPossiblePositions(nextPosition, diceRoll - 1, possiblePositions, visitedRooms, nextCanEnterRoom);
        }
    }

    // Unmark the room when backtracking
    visitedRooms.erase(currentPosition);
}

// Log an event message to the log file.
void GameServer::logEvent(const QString &message)
{
    //Check log file is open
    if (log && log->isOpen())
    {
        QTextStream stream(log);
        stream << message << "\n";
        log->flush();
    }
}

// Get the current dice value.
int GameServer::GetCurrentDice()
{
    return currentDice;
}

// Get available moves for a player based on their position and dice roll.
QVector<int> GameServer::getAvailableMoves(int pos, int dice)
{
    //Vector of all possible moves from a specific position, the index of the vector is the
    //current position, while the 4 values are the possible moves left, right, up and down
    //from that position
    data = {
        {36, 37, 20, 68},
        {40, 50, -1, -1},
        {-1, -1, 82, -1},
        {-1, -1, 78, -1},
        {5, -1, 74, -1},
        {-1, 51, -1, 4},
        {-1, -1, -1, 41},
        {-1, 8, -1, 10},
        {7, -1, -1, 19},
        {-1, -1, -1, 13},
        {-1, 11, 7, 15},
        {10, -1, -1, 16},
        {-1, 13, -1, 22},
        {12, 14, 9, 23},
        {13, -1, -1, 24},
        {-1, 16, 10, 25},
        {15, 17, 11, 26},
        {16, 18, -1, 27},
        {17, 19, -1, 28},
        {18, 20, 8, -1},
        {19, 21, -1, -1},
        {20, 22, -1, -1},
        {21, 23, 12, 29},
        {22, 24, 13, 30},
        {23, -1, 14, 31},
        {-1, 26, 15, 33},
        {25, 27, 16, 34},
        {26, 28, 17, 35},
        {27, -1, 18, 36},
        {-1, 30, 22, 37},
        {29, 31, 23, 38},
        {30, 32, 24, 39},
        {31, -1, -1, 40},
        {-1, 34, 25, 43},
        {33, 35, 26, 44},
        {34, 36, 27, 45},
        {35, 0, 28, 46},
        {0, 38, 29, 47},
        {37, 39, 30, 48},
        {38, 40, 31, 49},
        {39, 1, 32, 50},
        {-1, 42, 6, 51},
        {41, -1, -1, 52},
        {-1, 44, 33, -1},
        {43, 45, 34, -1},
        {44, 46, 35, 55},
        {45, -1, 36, 56},
        {-1, 48, 37, 57},
        {47, 49, 38, 58},
        {48, 50, 39, 59},
        {49, 1, 32, 50},
        {5, 52, 41, 61},
        {51, 53, 42, 62},
        {52, 54, -1, 63},
        {53, 55, -1, 64},
        {54, 56, 45, 65},
        {55, -1, 36, 66},
        {-1, 58, 47, 70},
        {57, 59, 48, 71},
        {58, 60, 49, 72},
        {59, -1, 50, -1},
        {-1, 62, 51, 73},
        {61, 63, 52, 74},
        {62, 64, 53, -1},
        {63, 65, 54, -1},
        {64, 66, 55, 75},
        {65, 67, 56, 76},
        {66, 68, -1, 77},
        {67, 69, -1, 78},
        {68, 70, -1, 79},
        {69, 71, 57, 80},
        {70, 72, 58, 81},
        {71, 73, 59, 82}
    };

    bool canEnterRoom = false;
    std::vector<int> possiblePositions;
    std::unordered_set<int> visitedRooms;

    int currentPosition = pos; // Replace with the player's current position
    int diceRoll = dice;         // Replace with the dice roll value


    findPossiblePositions(currentPosition, diceRoll, possiblePositions, visitedRooms, false);

    QVector<int> unique;
    std::set<int> uniqueSet;

    for (int num : possiblePositions) {
        // Check if the number is not already in the set
        if (uniqueSet.find(num) == uniqueSet.end()) {
            uniqueSet.insert(num);   // Add it to the set
            unique.push_back(num); // Add it to the new vector
        }
    }




    emit MovesAvailableSignal(unique);

    return unique;
}




/*! Function to deal cards to players when the game starts
 *
 *  This function creates instances of character, room and weapon cards to represent all the cards
 *  in a Cluedo game, one of each type of card is randomly selected and placed in the winEnvelope.
 *  The remaining cards are randomly shuffled and dealt out to the players, ensuring each player gets
 *  an equal number of cards. Any remaining cards are stored in a vector of face up cards.
 *
 *  no returns
 */
void GameServer::DealCards()
{
    //Vectors to store each kind of card
    QVector<CharacterCard*> charac;
    QVector<RoomCard*> room;
    QVector<WeaponCard*> weapon;

    //Create all character cards
    CharacterCard* green = new CharacterCard("Green");
    CharacterCard* white = new CharacterCard("White");
    CharacterCard* scarlet = new CharacterCard("Scarlet");
    CharacterCard* plum = new CharacterCard("Plum");
    CharacterCard* mustard = new CharacterCard("Mustard");
    CharacterCard* peacock = new CharacterCard("Peacock");

    //Create all room cards
    RoomCard* courtyard = new RoomCard("Court Yard");
    RoomCard* garage = new RoomCard("Garage");
    RoomCard* bedroom = new RoomCard("Bedroom");
    RoomCard* bathroom = new RoomCard("Bathroom");
    RoomCard* study = new RoomCard("Study");
    RoomCard* kitchen = new RoomCard("Kitchen");
    RoomCard* diningRoom = new RoomCard("Dining Room");
    RoomCard* livingRoom = new RoomCard("Living Room");
    RoomCard* games = new RoomCard("Games Room");

    //Create all weapon cards
    WeaponCard* candle = new WeaponCard("Candlestick");
    WeaponCard* dagger = new WeaponCard("Dagger");
    WeaponCard* wrench = new WeaponCard("Wrench");
    WeaponCard* pipe = new WeaponCard("Lead Pipe");
    WeaponCard* rope = new WeaponCard("Rope");
    WeaponCard* pistol = new WeaponCard("Pistol");

    //Adds all character cards to a vector
    charac.append(green);
    charac.append(white);
    charac.append(scarlet);
    charac.append(plum);
    charac.append(mustard);
    charac.append(peacock);

    //Adds all room cards to a vector
    room.append(courtyard);
    room.append(garage);
    room.append(bedroom);
    room.append(bathroom);
    room.append(study);
    room.append(kitchen);
    room.append(diningRoom);
    room.append(livingRoom);
    room.append(games);

    //Adds all weapon cards to a vector
    weapon.append(candle);
    weapon.append(dagger);
    weapon.append(wrench);
    weapon.append(pipe);
    weapon.append(rope);
    weapon.append(pistol);

    //Chooses a single random card from each card type vector
    //and stores the three cards in the win envelope
    srand(time(0));
    int charInt = rand()%charac.size();
    CharacterCard* characEnvelope = charac[charInt];
    charac.remove(charInt);

    int roomInt = rand()%room.size();
    RoomCard* roomEnvelope = room[roomInt];
    room.remove(roomInt);

    int weapInt = rand()%weapon.size();
    WeaponCard* weapEnvelope = weapon[weapInt];
    weapon.remove(weapInt);

    winEnvelope = new Envelope(characEnvelope,roomEnvelope,weapEnvelope);

    //Randomly shuffles remaing cards
    std::random_shuffle(charac.begin(),charac.end());
    std::random_shuffle(room.begin(),room.end());
    std::random_shuffle(weapon.begin(),weapon.end());

    //Determines the amount of cards each player will get
    int cardsPerPlayer = 18/numPlayers;

    /* For each player in the players vector, a random card from all the
     * remaining cards is assigned to the players heldCards vectors.
     * The card is removed from the vector it is in when it is 'dealt'
     * to a player
     */
    for (int i=0;i<numPlayers;++i)
    {
        Player* currentPlayer = players[i];
        QVector<CharacterCard*> cVect;
        QVector<RoomCard*> rVect;
        QVector<WeaponCard*> wVect;
        for (int j=0; j<cardsPerPlayer;++j)
        {
            CharacterCard* c = nullptr;
            RoomCard* r = nullptr;
            WeaponCard* w = nullptr;

            int randomNum = (rand()%3)+1;
            if (randomNum == 1)
            {
                if (!charac.isEmpty())
                {
                    int index = rand()%charac.size();
                    c = charac.takeAt(index);
                    cVect.append(c);
                }
                else if (!room.isEmpty())
                {
                    int index = rand()%room.size();
                    r = room.takeAt(index);
                    rVect.append(r);
                }
                else if (!weapon.isEmpty())
                {
                    int index = rand()%weapon.size();
                    w = weapon.takeAt(index);
                    wVect.append(w);
                }
            }
            else if (randomNum == 2)
            {
                if (!room.isEmpty())
                {
                    int index = rand()%room.size();
                    r = room.takeAt(index);
                    rVect.append(r);
                }
                else if (!charac.isEmpty())
                {
                    int index = rand()%charac.size();
                    c = charac.takeAt(index);
                    cVect.append(c);
                }
                else if (!weapon.isEmpty())
                {
                    int index = rand()%weapon.size();
                    w = weapon.takeAt(index);
                    wVect.append(w);
                }
            }
            else
            {
                if (!weapon.isEmpty())
                {
                    int index = rand()%weapon.size();
                    w = weapon.takeAt(index);
                    wVect.append(w);
                }
                else if (!room.isEmpty())
                {
                    int index = rand()%room.size();
                    r = room.takeAt(index);
                    rVect.append(r);
                }
                else if (!charac.isEmpty())
                {
                    int index = rand()%charac.size();
                    c = charac.takeAt(index);
                    cVect.append(c);
                }
            }
        }
        currentPlayer->SetCharacCards(cVect);
        currentPlayer->SetRoomCards(rVect);
        currentPlayer->SetWeaponCards(wVect);
    }


    //Add the remaining cards to the face up vectors
    characFaceUp = charac;
    roomFaceUp = room;
    weaponFaceUp = weapon;

    int count = 1;

    qint16 num = players.size();
    QVector<QVector<QString>> vec;

    //Logs the cards that have been dealt to each player and the remaining cards
    for (Player* temp: players)
    {
        QVector<QString> names;
        for (int j = 0;j<temp->GetCharacCards().size();j++)
        {
            names.prepend(temp->GetCharacCards().at(j)->GetCardName());
        }
        for (int j = 0;j<temp->GetRoomCards().size();j++)
        {
            names.prepend(temp->GetRoomCards().at(j)->GetCardName());
        }
        for (int j = 0;j<temp->GetWeaponCards().size();j++)
        {
            names.prepend(temp->GetWeaponCards().at(j)->GetCardName());
        }
        vec.append(names);
        names.clear();
        QString d = QString::number(count);
        QString c = "";
        QString r = "";
        QString w = "";
        if (temp->GetCharacCards().size()>0)
        {
            c = temp->GetCharacCards().at(0)->GetCardName();
        }
        if (temp->GetRoomCards().size()>0)
        {
            r = temp->GetRoomCards().at(0)->GetCardName();
        }
        if (temp->GetWeaponCards().size()>0)
        {
            w = temp->GetWeaponCards().at(0)->GetCardName();
        }
        if (temp->GetCharacCards().size()>0)
        {
            for (int i=1;i<temp->GetCharacCards().size();i++)
            {
                c += ", "+temp->GetCharacCards().at(i)->GetCardName();
            }
        }
        if (temp->GetRoomCards().size()>0)
        {
            for (int i=1;i<temp->GetRoomCards().size();i++)
            {
                r += ", "+temp->GetRoomCards().at(i)->GetCardName();
            }
        }
        if (temp->GetWeaponCards().size()>0)
        {
            for (int i=1;i<temp->GetWeaponCards().size();i++)
            {
                w += ", "+temp->GetWeaponCards().at(i)->GetCardName();
            }
        }
        logEvent("Player "+d+" has been dealt the following cards:");
        logEvent("Character cards: "+c);
        logEvent("Room cards: "+r);
        logEvent("Weapon cards: "+w);
        count++;
    }
    QObject::connect(this,&GameServer::DealCardsSignal,this->s,&ServerMessageBroker::dealCardsSlot);
    emit this->DealCardsSignal(num,vec);
}


//signals
//these arent implicitly made into functions, they are rather "emitted" in the desired part of the logical code.


//slots
// Slot function to handle player movement request.
void GameServer::MoveRequestedSlot(NetworkPlayer &player, quint32 pos)
{
    // Your implementation here, e.g., move the player to the specified destination
    // playerToMove->MoveTo(destination);
    Player* playerToMove;
    for (Player* temp:players)
    {
        if (temp->GetUsername() == player.getUsername())
        {
            playerToMove = temp;
        }
    }
    quint32 destination = pos;
    QString d = QString::number(destination);
    QString c = QString::number(playerToMove->GetPosition());
    int position = playerToMove->GetPosition();
    bool valid = false;
    QVector<int> posPosition = getAvailableMoves(position,currentDice);
    logEvent(playerToMove->GetUsername()+" is attempting to move from "+c+" to "+d);
    //Compares move to all possible moves based on current position and dice roll
    for (int temp : posPosition)
    {
        if (destination == temp)
        {
            valid = true;
        }
    }
    if (valid == true)
    {
        playerToMove->SetPosition(destination);
        QObject::connect(this,&GameServer::UpdateStateSignal,this->s,&ServerMessageBroker::updateStateSlot);
        emit this->UpdateStateSignal(playerToMove->GetUsername(),destination);
        logEvent(playerToMove->GetUsername()+" moved from "+c+" to "+d);
        qDebug("Valid move");
    }
    else
    {

        QObject::connect(this,&GameServer::invalidMove,this->s,&ServerMessageBroker::invalidMove);
        emit this->invalidMove(playerToMove->GetUsername());
        logEvent("Invalid move from "+c+" to "+d);
        qDebug("Invalid move");
    }
}

void GameServer::SuggestionReceivedSlot(NetworkPlayer &player, QString person, QString w, QString r)
{
    // Your implementation here, e.g., handle the received suggestion
    // For example, process the suggestion and send a response.
    //change to the right fucken types
    //Player* inPlayer, CharacterCard* character, RoomCard* room, WeaponCard* weapon
    Player* inPlayer;
    for (int i = 0; i < players.size(); i++){
        Player* temp = players[i];
        if (temp->GetUsername() == player.getUsername()){
            inPlayer = players[i];
        }
    }
    //player will be assigned
    //now fix the cards and shit to be used
    CharacterCard* character = new CharacterCard(person);
    WeaponCard* weapon = new WeaponCard(w);
    RoomCard* room = new RoomCard(r);
    //
    qDebug("in suggestion slot");
    for (int i = 0; i < players.size(); i++){
        Player* tempPlayer = players[i];
        if (tempPlayer->GetUsername() == character->GetCardName()){
            tempPlayer->SetPosition(inPlayer->GetPosition());
        }
    }

    inPlayer->MakeSuggestion(inPlayer, character, room, weapon);
    //void suggestionUpdateSlot(QString username, QVector<QString> suggestion);
    connect(this, &GameServer::suggestionUpdateSignal, this->s, &ServerMessageBroker::suggestionUpdateSlot);

    QVector<QString> sugg;
    sugg.append(character->GetCardName());
    sugg.append(room->GetCardName());
    sugg.append(weapon->GetCardName());
    s->suggestionUpdateSlot(inPlayer->GetUsername(), sugg);

//    bool cardShown = false;

//    for (int i = 0; i < players.size(); i++){
//        Player* currPlayer = players[i];


//        QVector<CharacterCard*> charCards = currPlayer->GetCharacCards();

//        for (int j = 0; j < currPlayer->GetCharacCards().size(); j++){
//            if (charCards[j] -> GetCardName() == character->GetCardName()){
//                //connect up the show card signal and emit the signal to notify the GUI to show a card and the name of the card to show

//                connect(this, &GameServer::ShowCardSignal, this->s, &ServerMessageBroker::showCardSlot);
//                //convert from player to NetworkPlayer
//                //fix this shit
//                NetworkPlayer* nPlayer = new NetworkPlayer(inPlayer->GetPerson(), inPlayer->GetUsername(), false);

//                emit this -> ShowCardSignal(nPlayer, character->GetCardName());
//                cardShown = true;
//                break;
//            }
//        }

//        if (cardShown == false){
//            QVector<RoomCard*> rooCards = currPlayer->GetRoomCards();
//            for (int j = 0; j < currPlayer->GetRoomCards().size(); j++){
//                RoomCard* temp = rooCards[j];
//                if (temp->GetCardName() == room->GetCardName()){
//                    //connect signal here
//                    connect(this, &GameServer::ShowCardSignal, this->s, &ServerMessageBroker::showCardSlot);
//                    //convert from player to NetworkPlayer
//                    //fix this shit
//                    NetworkPlayer* nPlayer = new NetworkPlayer(inPlayer->GetPerson(), inPlayer->GetUsername(), false);

//                    emit this -> ShowCardSignal(nPlayer, character->GetCardName());

//                    cardShown = true;
//                    break;
//                }
//            }

//            if(cardShown == false){
//                QVector<WeaponCard*> weapCards = currPlayer->GetWeaponCards();

//                for (int j = 0; j < currPlayer->GetWeaponCards().size(); j++){
//                    WeaponCard* tempWeap = weapCards[j];

//                    if (tempWeap->GetCardName() == weapon->GetCardName()){
//                        //connect signal here

//                        connect(this, &GameServer::ShowCardSignal, this->s, &ServerMessageBroker::showCardSlot);
//                        //convert from player to NetworkPlayer
//                        //fix this shit
//                        NetworkPlayer* nPlayer = new NetworkPlayer(inPlayer->GetPerson(), inPlayer->GetUsername(), false);

//                        emit this -> ShowCardSignal(nPlayer, character->GetCardName());

//                        cardShown = true;
//                        break;
//                    }
//                }
//            }
//        }
//    }
}

// Implement the AccusationReceivedSlot function
void GameServer::AccusationReceivedSlot(NetworkPlayer &player, QString person, QString w, QString r)
{
    // Your implementation here, e.g., handle the received accusation
    // For example, check if the accusation is correct and take appropriate action.
    Player* inPlayer;
    for (int i = 0; i < players.size(); i++){
        Player* temp = players[i];
        if (temp->GetUsername() == player.getUsername()){
            inPlayer = players[i];
        }
    }
    //player will be assigned
    //now fix the cards and shit to be used
    CharacterCard* character = new CharacterCard(person);
    WeaponCard* weapon = new WeaponCard(w);
    RoomCard* room = new RoomCard(r);


    //convert from player to NetworkPlayer

    NetworkPlayer* nPlayer = new NetworkPlayer(inPlayer->GetPerson(), inPlayer->GetUsername(), false);


    if (winEnvelope->CompareAccusation(character, room, weapon)){
        connect(this, &GameServer::PlayerResultSignal, this->s, &ServerMessageBroker::playerResultSlot);
        //QString playerName, QString person, QString weapon, QString room, bool win
        emit this -> PlayerResultSignal(inPlayer->GetUsername(), inPlayer->GetPerson(), weapon->GetCardName(), room->GetCardName(), true);
    }
    else{
        connect(this, &GameServer::PlayerResultSignal, this->s, &ServerMessageBroker::playerResultSlot);
        //QString playerName, QString person, QString weapon, QString room, bool win
        emit this -> PlayerResultSignal(inPlayer->GetUsername(), inPlayer->GetPerson(), weapon->GetCardName(), room->GetCardName(), false);
    }

    //you need to connect this

    connect(this, &GameServer::TerminateGameSignal, this->s, &ServerMessageBroker::terminateGameSlot);
    emit this->TerminateGameSignal();
}

// Implement the CardShownSlot function
void GameServer::CardShownSlot(NetworkPlayer &player, QString cardName)
{
    // Your implementation here, e.g., handle when a card is shown to a player
    // For example, update the game state based on the shown card.
    Player* playerMakingSuggestion = nullptr;
    for ( Player* temp: players) {
        if (temp->GetMyTurn()) {
            playerMakingSuggestion = temp;
        }
    }
    NetworkPlayer* recplayer = new NetworkPlayer(playerMakingSuggestion->GetUsername(),
                         playerMakingSuggestion->GetPerson(),
                         playerMakingSuggestion->GetAI());

    this->s->showCardSlot(recplayer, cardName);
    if (cardName == "None") {

        this->s->shownCardSlot(player.getUsername(), recplayer->getUsername(), false);
    } else {
        this->s->shownCardSlot(player.getUsername(), recplayer->getUsername(), true);
    }
    return;
}

// Implement the AddPlayerSlot function
void GameServer::AddPlayerSlot(QString username)
{
    // Your implementation here, e.g., add a new player to the game
    // For example, store the player in a data structure or perform necessary initialization.
    Player* newPlayer = new Player(username);
    srand(time(0)+players.size());
    if (players.size()<numPlayers)
    {
        players.append(newPlayer);
        //Log the player being added
        if (players.size() == 1)
        {
            logEvent("Player 1 added");
        }
        else if (players.size() == 2)
        {
            logEvent("Player 2 added");
        }
        else if (players.size() == 3)
        {
            logEvent("Player 3 added");
        }
        else if (players.size() == 4)
        {
            logEvent("Player 4 added");
        }
        else if (players.size() == 5)
        {
            logEvent("Player 5 added");
        }
        else if (players.size() == 6)
        {
            logEvent("Player 6 added");
        }
        //Log the start dice roll for each player
        int dice1 = newPlayer->RollDice();
        int dice2 = newPlayer->RollDice();
        startDice.append(dice1 + dice2);
        if (players.size() == 1)
        {
            QString d = QString::number(startDice[0]);
            logEvent("Player 1 start dice is: "+d);
        }
        else if (players.size() == 2)
        {
            QString d = QString::number(startDice[1]);
            logEvent("Player 2 start dice is: "+d);
        }
        else if (players.size() == 3)
        {
            QString d = QString::number(startDice[2]);
            logEvent("Player 3 start dice is: "+d);
        }
        else if (players.size() == 4)
        {
            QString d = QString::number(startDice[3]);
            logEvent("Player 4 start dice is: "+d);
        }
        else if (players.size() == 5)
        {
            QString d = QString::number(startDice[4]);
            logEvent("Player 5 start dice is: "+d);
        }
        else if (players.size() == 6)
        {
            QString d = QString::number(startDice[5]);
            logEvent("Player 6 start dice is: "+d);
        }
        qDebug("Attempt emmission");

        QObject::connect(this,&GameServer::acceptPlayer,this->s,&ServerMessageBroker::acceptPlayer);
        emit this->acceptPlayer(newPlayer->GetUsername(),newPlayer->GetPerson(),dice1,dice2);
        qDebug("Emitted");
        if (players.size() == numPlayers)
        {
            int currentTurn = 0;
            for (Player* temp:players)
            {
                if (temp->GetMyTurn() == true)
                {
                    break;
                }
                currentTurn++;
            }
            QVector<QString> names;
            for (CharacterCard* c:characFaceUp)
            {
                names.append(c->GetCardName());
            }
            for (RoomCard* r:roomFaceUp)
            {
                names.append(r->GetCardName());
            }
            for (WeaponCard* w:weaponFaceUp)
            {
                names.append(w->GetCardName());
            }

            QObject::connect(this,&GameServer::gameStateSlot,this->s,&ServerMessageBroker::gameStateSlot);
            emit this->gameStateSlot(currentDice, names, currentTurn);
            logEvent("Game started");
            qDebug("Game started");
            DealCards();
        }
    }
}

//Slot to return the game state upon a request
void GameServer::StateRequestSlot(QString requesting)
{
    int currentTurn = 0;
    for (Player* temp:players)
    {
        if (temp->GetMyTurn() == true)
        {
            break;
        }
        currentTurn++;
    }
    QVector<QString> names;
    for (CharacterCard* c:characFaceUp)
    {
        names.append(c->GetCardName());
    }
    for (RoomCard* r:roomFaceUp)
    {
        names.append(r->GetCardName());
    }
    for (WeaponCard* w:weaponFaceUp)
    {
        names.append(w->GetCardName());
    }

    QObject::connect(this,&GameServer::GameStateReply,this->s,&ServerMessageBroker::gameStateReplySlot);
    emit this->GameStateReply(requesting,this->GetCurrentDice(),names,currentTurn);
    logEvent("Game state request received");
    qDebug("Players: ");
    logEvent("Players: ");
    for (int i=0;i<players.size();i++)
    {
        logEvent(players[i]->GetUsername());
        qDebug()<<players[i]->GetUsername();
    }
    qDebug("Number of Players: ");
    logEvent("Number of Players: ");
    qDebug()<<players.size();
    int size = players.size();
    logEvent(QString::number(size));
    qDebug("Current dice roll: ");
    logEvent("Current dice roll: ");
    qDebug()<<currentDice;
    int dicePrint = currentDice;
    logEvent(QString::number(dicePrint));
    qDebug("Current turn: ");
    logEvent("Current turn: ");
    qDebug()<<currentTurn;
    logEvent(QString::number(currentTurn));
    qDebug("Face up cards: ");
    logEvent("Face up cards: ");
    for (int i=0;i<characFaceUp.size();i++){
        logEvent(characFaceUp[i]->GetCardName());
        qDebug()<<characFaceUp[i]->GetCardName();
    }
    for (int i=0;i<roomFaceUp.size();i++){
        logEvent(roomFaceUp[i]->GetCardName());
        qDebug()<<roomFaceUp[i]->GetCardName();
    }
    for (int i=0;i<weaponFaceUp.size();i++){
        logEvent(weaponFaceUp[i]->GetCardName());
        qDebug()<<weaponFaceUp[i]->GetCardName();
    }
}



