import QtQuick 2.15
import QtTest 1.0

Item{

StartScreen{
    id:ss
}

Loader {
       id: ssLoader
       source: "StartScreen.qml"
       visible: true
   }

TestCase {
    name: "DemoTests"

    function initTestCase() {
    }

    function cleanupTestCase() {
    }

    function test_case1() {
        compare(1 + 1, 2, "sanity check");
        verify(true);
    }
    function test_clickAI()
    {
        compare(ssLoader.status,Loader.Ready); // wait for qml generation
        var btn = findChild(ssLoader,"btnAI");
        var pass = btn.visible === true;
        mouseClick(btn);
        wait(500);
        pass = btn.visible === false;

        verify(pass,"AI button did not disable once pressed")
    }
}
}
