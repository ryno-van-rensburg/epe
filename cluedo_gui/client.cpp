#include "client.h"
#include <QDebug>
#include <QMessageBox>
#include <QApplication>

Client::Client(QObject *parent)
    : QObject{parent}, currentPlayerTurn(0)
{
}
/**
 * @brief Sends a test message received from the broker.
 *
 * This function logs the received message from the broker and sends a test
 * message to the broker using the `testSendMessageToBroker` signal.
 *
 * @param message The message received from the broker.
 */
void Client::testReceiveMessage(QString& message){
    qDebug() << "Received message from broker: " << message;
    QString s("Hello from client");
    emit testSendMessageToBroker(s);
}

/**
 * @brief Retrieves the position of a player on the game board.
 *
 * This function retrieves the X and Y coordinates of the specified player
 * identified by their player ID.
 *
 * @param playerId The ID of the player to get the position for.
 * @return A tuple containing X and Y coordinates of the player.
 */
std::tuple<int,int> Client::getPlayerPosition(int playerId){
    std::tuple<int,int> a;
    return a;
}

/**
 * @brief Retrieves the current turn's player ID.
 *
 * This function returns the player ID of the current turn.
 *
 * @return The player ID of the current turn.
 */
int Client::playerTurn() const
{
    return currentPlayerTurn;
}

/**
 * @brief Emits a signal to make a move to the specified position.
 *
 * This function emits the `makeMove` signal with the specified position,
 * indicating a move action to be taken.
 *
 * @param position The position to move to.
 */
void Client::emitMakeMoveSignal(int position){
    emit makeMove(position);
}

/**
 * @brief Handles the received suggestion and emits a corresponding signal.
 *
 * This function logs the received suggestion and emits the `makeSuggestion`
 * signal to notify other components about the suggestion made by a player.
 *
 * @param room The suggested room.
 * @param person The suggested person.
 * @param item The suggested item.
 */
void Client::onSuggestionReceived(QString room, QString person, QString item)
{
    qDebug() << "Suggestion" << person << room << item;
    emit makeSuggestion(person, item, room);
}

/**
 * @brief Updates the position of a player on the game board.
 *
 * This function emits the `playerPositionUpdated` signal to notify other components
 * about the updated position of a player identified by their player ID.
 *
 * @param playerId The ID of the player whose position is updated.
 * @param newX The new X-coordinate of the player.
 * @param newY The new Y-coordinate of the player.
 */
void Client::updatePlayerPosition(int playerId, int newX, int newY)
{
    emit playerPositionUpdated(playerId, newX, newY);
}

/**
 * @brief Sets the position of a player on the game board.
 *
 * This function logs the new player position and emits the `makeMove` signal
 * to indicate the player's move action.
 *
 * @param playerId The ID of the player whose position is set.
 * @param newX The new X-coordinate of the player.
 * @param newY The new Y-coordinate of the player.
 */
void Client::playerPositionSet(int playerId, int newX, int newY)
{
    qDebug() << "Player position set: " << playerId << newX << newY;
    emit makeMove(newX);
    this->onTurnEnded();
}

/**
 * @brief Emits a signal to request a connection to the specified address and port.
 *
 * This function emits the `requestConnection` signal with the provided address,
 * port, and username, initiating a connection request to the server.
 *
 * @param address The IP address of the server to connect to.
 * @param port The port number to connect to on the server.
 * @param username The username used for the connection.
 */
void Client::emitRequestConnectionSignal(quint32 address, quint16 port, QString username)
{
    emit requestConnection(address, port, username);
}

/**
 * @brief Emits a signal to request the current game state.
 *
 * This function emits the `requestStateSlot` signal to request the current
 * game state from the server.
 */
void  Client::emitRequestStateSlotSignal(){
    emit requestStateSlot();
}

void Client::emitSendConnectionRequestSignal(QString username)
{
    emit sendConnectionRequest(username);
}

void Client::emitValidUsernameSignal(){
    emit validUsername();
}

void Client::onNameEntered(QString name){
    qDebug() << "Name entered: " << name;
    //SIMON FUNCTION
    if(true){

    emit validUsername();
    }
}

void Client::setPlayerTurn(int turn)
{
    if(currentPlayerTurn != turn){
        currentPlayerTurn = turn;
        emit playerTurnChanged();
    }
}

void Client :: emitShowCardSignal(QString card){
    emit showCard(card);
}
void Client::onTurnEnded(){
    int nextTurn = currentPlayerTurn > 6 ? 1:(currentPlayerTurn % 7 + 1);
    this->setPlayerTurn(nextTurn);
    qDebug()<<"TEST: Moving Player";
    this->updatePlayerPosition(nextTurn, (std::rand() % 1000) , (std::rand() % 700));
}

void Client::onAccusationMade(QString room,QString person, QString item)
{
    qDebug() << "Accusation" << person << room << item;
    emit    makeAccusation(person, item, room);
}
void Client::onSuggestionMade(QString room,QString person, QString item)
{
    qDebug() << "Suggestion" << person << room << item;
    emit makeSuggestion(person, item, room);
}
void Client::testBox(QString in)
{
    QMessageBox msgBox;
    msgBox.setText("The document has been modified.");
    msgBox.setInformativeText(in);
    msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Save);
    int ret = msgBox.exec();
}
