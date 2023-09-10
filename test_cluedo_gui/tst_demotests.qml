import QtQuick 2.15
import QtTest 1.0

Item{

StartScreen{
    id:ss
}

Loader {
       id: mLoader
       source: "main.qml"
       visible: true
   }

TestCase {
    name: "DemoTests"
    //when: windowShown
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
        compare(mLoader.status,Loader.Ready); // wait for qml generation
        var btn = findChild(mLoader,"btnAI");
        var pass = btn.visible === true;
        mouseClick(btn);
        wait(500);
        pass = btn.visible === false;

        verify(pass,"AI button disable once pressed: failed")
    }
    function test_clickStart()
    {
        mLoader.active = false;
        mLoader.source = "main.qml";
        mLoader.active = true; //reload loader
        wait(1000);
        compare(mLoader.status,Loader.Ready); // wait for qml generation
        var btn = findChild(mLoader,"btnAI");
        var prompt = findChild(mLoader,"namePrompt");
        var pass = btn.visible === true;
        mouseClick(btn)
        wait(500);
        pass= (btn.visible === false);
        verify(pass);
//        compare(mLoader.status,Loader.Ready); // wait for qml generation
        //var btn = findChild(mLoader,"btnStart");
        //var btn = mLoader.findChild(function(item) {
        //            return item.objectName === "btnStart";
        //        });
        //console.log(btn);
        //while(mLoader.status !== Loader.Ready)
        //{
//            wait(10);
//        }
//        var loaderItems = mLoader.item;
//        for (var i = 0; i < loaderItems.children.length;i++)
//        {
//            var child = loaderItems.children[i];
//            console.log("Child:",child);
//        }
          //var btn = ss.btnStart;
//        var pass = btn.visible === true;
//        mouseClick(btn);
//        wait(500);
//        pass = btn.visible === false;

//        verify(pass,"Failed:Name prompt correctly displays once clicked")

    }
}
}
