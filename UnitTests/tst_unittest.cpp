#include <QtTest>
#include "gameserver.h"
#include "move.h"
#include "signalsender.h"

// add necessary includes here

class UnitTest : public QObject
{
    Q_OBJECT

public:
    UnitTest();
    ~UnitTest();

private slots:
    void testCardReturns();
    void testSuggestionReturns();
    void testEnvelopeWin();
    void testMove();
    void testPlayerReturns();
    void testDiceRoll();
    void testAddPlayer();
    void testStartGame();
    void testDealCards();
};

UnitTest::UnitTest()
{

}

UnitTest::~UnitTest()
{

}

void UnitTest::testCardReturns()
{
    CharacterCard* c = new CharacterCard("Plum");
    RoomCard* r = new RoomCard("Study");
    WeaponCard* w = new WeaponCard("Candlestick");

    QCOMPARE(c->GetCardName(),"Plum");
    QCOMPARE(r->GetCardName(),"Study");
    QCOMPARE(w->GetCardName(),"Candlestick");

    delete c;
    delete r;
    delete w;
}

void UnitTest::testSuggestionReturns()
{
    CharacterCard* c = new CharacterCard("Scarlet");
    RoomCard* r = new RoomCard("Living Room");
    WeaponCard* w = new WeaponCard("Rope");
    Suggestion* s = new Suggestion(c,r,w);
    Accusation* a = new Accusation(c,r,w);

    QCOMPARE(s->GetCharacter()->GetCardName(), "Scarlet");
    QCOMPARE(s->GetRoom()->GetCardName(), "Living Room");
    QCOMPARE(s->GetWeapon()->GetCardName(), "Rope");

    QCOMPARE(a->GetCharacter()->GetCardName(), "Scarlet");
    QCOMPARE(a->GetRoom()->GetCardName(), "Living Room");
    QCOMPARE(a->GetWeapon()->GetCardName(), "Rope");

    delete c,r,w,s,a;
}

void UnitTest::testEnvelopeWin()
{
    CharacterCard* c = new CharacterCard("Green");
    RoomCard* r = new RoomCard("Dining Room");
    WeaponCard* w = new WeaponCard("Dagger");
    Envelope* e = new Envelope(c,r,w);

    CharacterCard* c_wrong = new CharacterCard("Plum");
    RoomCard* r_wrong = new RoomCard("Dining Room");
    WeaponCard* w_wrong = new WeaponCard("Lead Pipe");

    QCOMPARE(e->CompareAccusation(c,r,w),true);
    QCOMPARE(e->CompareAccusation(c_wrong,r_wrong,w_wrong),false);

    delete c,r,w,e,c_wrong,r_wrong,w_wrong;
}

void UnitTest::testMove()
{
    Move* m = new Move();
    m->SetDestination(12);
    QCOMPARE(m->GetDestination(),12);
    delete m;
}

void UnitTest::testPlayerReturns()
{
    CharacterCard* c = new CharacterCard("Green");
    RoomCard* r = new RoomCard("Dining Room");
    WeaponCard* w = new WeaponCard("Dagger");
    QVector<CharacterCard*> charac;
    QVector<RoomCard*> room;
    QVector<WeaponCard*> weap;
    charac.append(c);
    room.append(r);
    weap.append(w);
    Player* p = new Player("Player1",charac,room,weap,15,0);
    QCOMPARE(p->GetUsername(),"Player1");
    QCOMPARE(p->GetCharacCards(),charac);
    QCOMPARE(p->GetRoomCards(),room);
    QCOMPARE(p->GetWeaponCards(),weap);
    QCOMPARE(p->GetPosition(),15);
    delete c,r,w,p;
}

void UnitTest::testDiceRoll()
{
    QVector<CharacterCard*> charac;
    QVector<RoomCard*> room;
    QVector<WeaponCard*> weap;
    Player* p = new Player("Player1",charac,room,weap,15,0);
    int value = p->RollDice();
    QVERIFY2(value>=1 && value<=6,"Value not in correct range");
    delete p;
}

void UnitTest::testAddPlayer()
{
    signalsender* sender = new signalsender();
    GameServer* g = new GameServer();
    QObject::connect(sender,&signalsender::AddPlayerSignal,g,&GameServer::AddPlayerSlot);
    QVector<CharacterCard*> x;
    QVector<RoomCard*> y;
    QVector<WeaponCard*> z;
    Player* p1 = new Player("Player1",x,y,z,26,0);
    emit sender->AddPlayerSignal(p1);
    QCOMPARE(g->GetPlayers().size(),1);
    QCOMPARE(g->getStartDice().size(),1);

}

void UnitTest::testStartGame()
{
    QVector<CharacterCard*> x;
    QVector<RoomCard*> y;
    QVector<WeaponCard*> z;
    Player* p1 = new Player("Player1",x,y,z,26,0);
    Player* p2 = new Player("Player2",x,y,z,12,1);
    Player* p3 = new Player("Player3",x,y,z,1,0);
    Player* p4 = new Player("Player4",x,y,z,15,1);
    GameServer* g = new GameServer();
    QSignalSpy spy(g,SIGNAL(StartGameSignal()));
    g->setNumPlayers(4);
    g->AddPlayerSlot(p1);
    g->AddPlayerSlot(p2);
    g->AddPlayerSlot(p3);
    g->AddPlayerSlot(p4);

    QVERIFY(spy.count()>0);
}

void UnitTest::testDealCards()
{
    QVector<CharacterCard*> x;
    QVector<RoomCard*> y;
    QVector<WeaponCard*> z;
    Player* p1 = new Player("Player1",x,y,z,26,0);
    Player* p2 = new Player("Player2",x,y,z,12,1);
    Player* p3 = new Player("Player3",x,y,z,1,0);
    Player* p4 = new Player("Player4",x,y,z,15,1);
    GameServer* g = new GameServer();
    g->setNumPlayers(4);
    g->AddPlayerSlot(p1);
    g->AddPlayerSlot(p2);
    g->AddPlayerSlot(p3);
    g->AddPlayerSlot(p4);

    QCOMPARE(p1->GetCharacCards().size()+p1->GetRoomCards().size()+p1->GetWeaponCards().size(),18/4);
    QCOMPARE(g->getCharacFaceUp().size()+g->getRoomFaceUp().size()+g->getWeaponFaceUp().size(),18-((18/4)*4));

    delete p1,p2,p3,p4;
}

QTEST_APPLESS_MAIN(UnitTest)

#include "tst_unittest.moc"
