#include "clientmessagebroker.h"
#include <QDebug>

ClientMessageBroker::ClientMessageBroker(QObject *parent)
    : QObject{parent}
{
}

ClientMessageBroker::~ClientMessageBroker(){
}

void ClientMessageBroker::testReceiveMessageFromClient(QString& message){
    qDebug() << "Broker:Received message from client: " << message;
}


/**
 * @brief Sends a connection request to the server.
 *
 * This function sends a connection request to the server with the provided
 * username. It constructs a `Message` object representing the request and
 * sends it using the internal `Client` instance.
 *
 * @param username The username for the connection request.
 */
void ClientMessageBroker::sendConnectionRequest(QString username){

}
/**
 * @brief Initiates a connection request to the server.
 *
 * This function initiates a connection request to the server with the provided
 * address, port, and username. It triggers the connection process and waits for
 * signals to emit the connection request.
 *
 * @param address The IP address of the server to connect to.
 * @param port The port number of the server to connect to.
 * @param username The username for the connection request.
 */
void ClientMessageBroker::requestConnection(quint32 address, quint16 port, QString username) {
    
}

/**
 * @brief Sends a move request to the server.
 *
 * This function sends a move request to the server with the specified position.
 * It constructs a `Message` object representing the move request and sends it
 * using the internal `Client` instance.
 *
 * @param position The position to move to.
 */
void ClientMessageBroker::makeMove(int position){
}

/**
 * @brief Shows a card to the server.
 *
 * This function sends a message to the server to show a card with the specified
 * name. It constructs a `Message` object representing the card showing and sends
 * it using the internal `Client` instance.
 *
 * @param card The name of the card to show.
 */
void ClientMessageBroker::showCard(QString card){
    
}

/**
 * @brief Makes an accusation to the server.
 *
 * This function sends an accusation message to the server with the specified
 * person, weapon, and room. It constructs a `Message` object representing the
 * accusation and sends it using the internal `Client` instance.
 *
 * @param person The accused person.
 * @param weapon The accused weapon.
 * @param room The accused room.
 */
void ClientMessageBroker::makeAccusation(QString person, QString weapon, QString room)
{
    
}

/**
 * @brief Makes a suggestion to the server.
 *
 * This function sends a suggestion message to the server with the specified
 * person, weapon, and room. It constructs a `Message` object representing the
 * suggestion and sends it using the internal `Client` instance.
 *
 * @param person The suggested person.
 * @param weapon The suggested weapon.
 * @param room The suggested room.
 */
void ClientMessageBroker::makeSuggestion(QString person, QString weapon, QString room)
{
   
}

/**
 * @brief Requests the game state from the server.
 *
 * This function sends a request to the server for the current game state. It
 * constructs a `Message` object representing the request and sends it using
 * the internal `Client` instance.
 */
void ClientMessageBroker::requestStateSlot()
{
   
}
