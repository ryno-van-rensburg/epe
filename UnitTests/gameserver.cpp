#include "gameserver.h"
#include <time.h>
#include <vector>
#include <unordered_set>
#include <set>

GameServer::GameServer(QObject *parent)
    : QObject{parent}
{

}

GameServer::~GameServer(){
    for (Player* player : players) {
        delete player;
    }
    players.clear();
    delete winEnvelope;
}

QString GameServer::GetGameID(){
    return gameID;
}

QVector<Player*> GameServer::GetPlayers(){
    return players;
}

Envelope* GameServer::GetEnvelopeCards(){
    return winEnvelope;
}

void GameServer::SetPlayerTurn(Player inPlayer){
    for (int i = 0; i < players.size(); i++){
        if (inPlayer.GetUsername() == players[i] -> GetUsername()){
            players[i] -> SetMyTurn();
            int pos = players[i]->GetPosition();
            int dice = players[i]->RollDice();
            getAvailableMoves(pos,dice);
        }
    }
}

void GameServer::EndPlayerTurn(Player inPlayer){
    for (int i = 0; i < players.size(); i++){
        if (inPlayer.GetUsername() == players[i] -> GetUsername()){
            players[i] -> EndMyTurn();
        }
    }
}

void GameServer::setNumPlayers(int num)
{
    this->numPlayers = num;
}

QVector<int> GameServer::getStartDice()
{
    return startDice;
}

QVector<CharacterCard *> GameServer::getCharacFaceUp()
{
    return characFaceUp;
}

QVector<RoomCard *> GameServer::getRoomFaceUp()
{
    return roomFaceUp;
}

QVector<WeaponCard *> GameServer::getWeaponFaceUp()
{
    return weaponFaceUp;
}

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

QVector<int> GameServer::getAvailableMoves(int pos, int dice)
{
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

    for (Player* temp: players)
    {
        emit DealCardsSignal(temp,temp->GetCharacCards(),temp->GetWeaponCards(),temp->GetRoomCards());
    }
}


//signals
//these arent implicitly made into functions, they are rather "emitted" in the desired part of the logical code.


//slots
void GameServer::MoveRequestedSlot(Player* playerToMove, int destination)
{
    // Your implementation here, e.g., move the player to the specified destination
    // playerToMove->MoveTo(destination);
    int dice1 = playerToMove->RollDice();
    int dice2 = playerToMove->RollDice();
    int diceFinal = dice1+dice2;
    currentDice = diceFinal;
    int position = playerToMove->GetPosition();
    bool valid = false;
    QVector<int> posPosition = getAvailableMoves(position,diceFinal);
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
        emit NotifyPlayerMoveSignal(playerToMove,destination);
        emit UpdateStateSignal(playerToMove,destination);
    }
    else
    {
        emit SendErrorSignal("INVALID_MOVE");
    }
}

void GameServer::SuggestionReceivedSlot(QString character, QString room, QString weapon)
{
    // Your implementation here, e.g., handle the received suggestion
    // For example, process the suggestion and send a response.
}

// Implement the AccusationReceivedSlot function
void GameServer::AccusationReceivedSlot(QString character, QString room, QString weapon)
{
    // Your implementation here, e.g., handle the received accusation
    // For example, check if the accusation is correct and take appropriate action.
}

// Implement the CardShownSlot function
void GameServer::CardShownSlot(Player* playerShown, QString cardName)
{
    // Your implementation here, e.g., handle when a card is shown to a player
    // For example, update the game state based on the shown card.
}

// Implement the AddPlayerSlot function
void GameServer::AddPlayerSlot(Player* newPlayer)
{
    // Your implementation here, e.g., add a new player to the game
    // For example, store the player in a data structure or perform necessary initialization.
    srand(time(0));
    players.append(newPlayer);
    startDice.append(newPlayer->RollDice()+newPlayer->RollDice());
    if (players.size() == numPlayers)
    {
        emit StartGameSignal();
        DealCards();
    }
}

void GameServer::StateRequestSlot()
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
    emit GameStateReply(players,players.size(),currentDice,currentTurn,characFaceUp,weaponFaceUp,roomFaceUp);
}



