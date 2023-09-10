#include "gameserver.h"
#include <time.h>

GameServer::GameServer(QObject *parent)
    : QObject{parent}
{

}

GameServer::GameServer(){

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

    //Create vectors for face up cards
    QVector<CharacterCard*> characFaceUp;
    QVector<RoomCard*> roomFaceUp;
    QVector<WeaponCard*> weaponFaceUp;

    //Add the remaining cards to the face up vectors
    characFaceUp = charac;
    roomFaceUp = room;
    weaponFaceUp = weapon;
}


//signals
//these arent implicitly made into functions, they are rather "emitted" in the desired part of the logical code.


//slots
void GameServer::MoveRequestedSlot(Player* playerToMove, int destination)
{
    // Your implementation here, e.g., move the player to the specified destination
    // playerToMove->MoveTo(destination);
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
        gameStart = true;
        DealCards();
    }
}



