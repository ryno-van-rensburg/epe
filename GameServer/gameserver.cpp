#include "gameserver.h"
#include <time.h>

GameServer::GameServer(QObject *parent)
    : QObject{parent}
{

}

GameServer::GameServer(){

}

GameServer::~GameServer(){

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

void GameServer::DealCards()
{

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



