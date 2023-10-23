#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include "clientmessagebroker.h"

class Client : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int playerTurn READ playerTurn WRITE setPlayerTurn NOTIFY playerTurnChanged)
public slots:
    //Slots from GUI:
    void testReceiveMessage(QString& message);
    void onNameEntered(QString name);
    void onTurnEnded();
    void onPlayerAccepted(QString username, QString person , int dice1, int dice2);
    void onAccusationMade(QString room,QString person, QString item);
    void onSuggestionMade(QString room,QString person, QString item);
    void onSuggestionReceived(QString room,QString person, QString item);
    void onRequestAnswered(QString room,QString person, QString item);
    void emitConnectionAccepted();
    void emitConnectionRejected();
    void onCardShown(bool hasCard, QString asked, QString showed); // Multicast
    void onCardShownToPlayer(QString username, QString card);      // Unicast
public:
    explicit Client(QObject *parent = nullptr);
    Q_INVOKABLE int playerTurn() const;
    Q_INVOKABLE int getCurrentDiceValue() const;
    Q_INVOKABLE void playerPositionSet(int playerId, int newX, int newY);
    Q_INVOKABLE QString getPlayerID(int n);
    void setPlayerTurn(int turn);
    void updatePlayerPosition(int playerId, int newX, int newY); //  will be network slot in future
    std::tuple<int,int> getPlayerPosition(int playerId); // will be network slot in future
    Q_INVOKABLE void emitRequestConnectionSignal();
    void emitMakeMoveSignal(int position);
    void emitShowCardSignal(QString card);
    void emitMakeAccusatonSignal(QString person, QString weapon, QString room);
    void emitMakeSuggestionSignal(QString person, QString weapon, QString room);
    void emitRequestStateSlotSignal();
    void emitSendConnectionRequestSignal(QString username);
    void emitValidUsernameSignal();
    void emitSendSuggestionSignal(QString username);
    void onRequestReceived();
    Q_INVOKABLE void testBox(QString in);
    //void emitCardShownSignal(QString showed);
    //void emitPlayerAcceptedSignal(QString username, QString person, int dice1, int dice2);
signals:
    void connectionAccepted();
    void connectionRejected();
    void promptRequested();
    void testSendMessageToBroker(QString& message);
    void validUsername();
    void playerPositionUpdated(int playerId, int newX, int newY);
    void playerTurnChanged();
    // Network class signals
    void requestConnection(quint32 address, quint16 port, QString username);
    void makeMove(int position);
    void showCard(QString card);
    void makeAccusation(QString person, QString weapon, QString room);
    void makeSuggestion(QString person, QString weapon, QString room);
    void requestStateSlot();
    void sendConnectionRequest(QString username);
private:

    void connectClientBroker();
    ClientMessageBroker broker;
    int currentPlayerTurn;
    int getRoomNumber(int x, int y);
    int diceValue;
    QString player1_id; // White
    QString player2_id; // Green
    QString player3_id; // Mustard, Yellow
    QString player4_id; // Blue, Peacock
    QString player5_id; // Purple, Plum
    QString player6_id; // Red, Scarlet
    QString my_id;
    QString my_person;
    
};

#endif // CLIENT_H
