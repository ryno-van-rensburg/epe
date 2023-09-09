#include "gameserver.h"

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




