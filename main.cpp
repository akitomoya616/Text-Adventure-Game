#include <iostream>
#include "Setters.h"
#include "Setters.cpp"
#include "Play.h"
#include "Play.cpp"
using namespace std;

int main(){
    char choice;
    string now;
cout<<"Welcome to play this test game"<<endl;



cout<<"PLease input the game loading file"<<endl;
string inputgame;
cin>>inputgame;
cout<<"PLease input the user loading file"<<endl;
string inputuser;
cin>>inputuser;
cout<<"Please select a choice"<<endl;
cout<<"A. new game"<<"        "<<"B. load game"<<endl;
cout<<endl;
cout<<"Your choice: ";
cin>>choice;
if(choice=='a'){

cout<<"Please input your username to start the test game"<<endl;
string username1;
cin>>username1;
int testuser=0;
int testgame=0;
int pairname=0;
Setters testplayer(username1,inputuser,inputgame);
testuser=testplayer.loadsavefile(inputuser);
testgame=testplayer.loadgamefile(inputgame);
pairname=testplayer.checkuserload(username1);
if(testgame==0){
    cout<<"error: cannot read gamefile"<<endl;
    return 0;
}
else{
      cout<<"gamefile load success"<<endl;
}
if(testuser==0){
        cout<<"error: cannot read userfile"<<endl;
    return 0;
}
else{
       cout<<"userfile load success"<<endl;
}
if(pairname==0){
    cout<<"error: username already been used"<<endl;
    return 0;
}
else{
    cout<<"username is new"<<endl;
}
Play testplayer1(username1,inputgame);
string nowname=testplayer.getsavename();

cout<<"Now the user is: "<<nowname<<endl;
cout<<endl;
cout<<endl;
cout<<"game start!"<<endl;
cout<<endl;
cout<<endl;


testplayer1.situation(0);
testplayer1.situation(1);
testplayer1.situation(2,4);
cout<<endl;
cout<<"Choose one action: ";
cin>>choice;
if(choice=='a'){
    testplayer1.situation(3);
    testplayer1.situation(4);
    testplayer1.situation(5,4);
    cout<<endl;
    cout<<"Choose one action: ";
    cin>>choice;
    if(choice=='a'){
    testplayer1.situation(6);
    testplayer1.situation(7);
    testplayer1.situation(8,4);
    return 0;
    }
    if(choice=='b'){
    testplayer1.situation(24);
    testplayer1.situation(25);
    testplayer1.situation(26,4);
    return 0;
    }
    if(choice=='c'){
    testplayer1.situation(27);
    testplayer1.situation(28);
    testplayer1.situation(29,4);
    cout<<endl;
    cout<<"Choose one action: ";
    cin>>choice;
      if(choice=='a'){
      testplayer1.situation(30);
      testplayer1.situation(31);
      testplayer1.situation(32,4);
      return 0;
      }
      if(choice=='b'){
      testplayer1.situation(33);
      testplayer1.situation(34);
      testplayer1.situation(35,4);
      return 0;
      }
      if(choice=='c'){
      testplayer1.situation(36);
      testplayer1.situation(37);
      testplayer1.situation(38,4);
      return 0;
      }
      if(choice=='d'){
        testplayer.setsave(inputuser,"27",username1);
        return 0;
      }
    }
    if(choice=='d'){
        testplayer.setsave(inputuser,"3",username1);
        return 0;
    }
}
if(choice=='b'){
    testplayer1.situation(21);
    testplayer1.situation(22);
    testplayer1.situation(23,4);
    testplayer1.award(23);
    return 0;
}
if(choice=='c'){
    testplayer1.situation(9);
    testplayer1.situation(10);
    testplayer1.situation(11,4);
    cout<<endl;
    cout<<"Choose one action: ";
    cin>>choice;
    if(choice=='a'){
      testplayer1.situation(12);
      testplayer1.situation(13);
      testplayer1.situation(14,4);
      testplayer1.award(14);
      return 0;
    }
    if(choice=='b'){
      testplayer1.situation(15);
      testplayer1.situation(16);
      testplayer1.situation(17,4);
      testplayer1.award(17);
      return 0;
    }
    if(choice=='c'){
      testplayer1.situation(18);
      testplayer1.situation(19);
      testplayer1.situation(20,4);
      testplayer1.award(20);
      return 0;
    }
    if(choice=='d'){
        testplayer.setsave(inputuser,"9",username1);
        return 0;
    }
}
if(choice=='d'){
        testplayer.setsave(inputuser,"0",username1);
        return 0;
}
}
if(choice=='b'){
cout<<"Please input your saved username to start the test game"<<endl;
string username2;
cin>>username2;
int testuser=0;
int testgame=0;
int pairname=0;
Setters testplayer(username2,inputuser,inputgame);
testuser=testplayer.loadsavefile(inputuser);
testgame=testplayer.loadgamefile(inputgame);
pairname=testplayer.checkuserload(username2);
if(testgame==0){
    cout<<"error: cannot read gamefile"<<endl;
    return 0;
}
else{
      cout<<"gamefile load success"<<endl;
}
if(testuser==0){
        cout<<"error: cannot read userfile"<<endl;
    return 0;
}
else{
       cout<<"userfile load success"<<endl;
}
if(pairname==1){
    cout<<"error: username has not been found"<<endl;
    return 0;
}
else{
    cout<<"username found, data loading......"<<endl;
}
string location=testplayer.loadsave(username2);
Play testplayer1(username2,inputgame);
string nowname=testplayer.getsavename();

cout<<"Now the user is: "<<nowname<<endl;
cout<<"who have reached route "<<location<<endl;
cout<<endl;
cout<<endl;
cout<<"game continues!"<<endl;
cout<<endl;
cout<<endl;

if(location=="27"){
testplayer1.situation(27);
    testplayer1.situation(28);
    testplayer1.situation(29,4);
    cout<<endl;
    cout<<"Choose one action: ";
    cin>>choice;
      if(choice=='a'){
      testplayer1.situation(30);
      testplayer1.situation(31);
      testplayer1.situation(32,4);
      return 0;
      }
      if(choice=='b'){
      testplayer1.situation(33);
      testplayer1.situation(34);
      testplayer1.situation(35,4);
      return 0;
      }
      if(choice=='c'){
      testplayer1.situation(36);
      testplayer1.situation(37);
      testplayer1.situation(38,4);
      return 0;
      }
      if(choice=='d'){
        testplayer.coversave(inputuser,"27",username2);
        return 0;
      }
}
if(location=="3"){
    testplayer1.situation(3);
    testplayer1.situation(4);
    testplayer1.situation(5,4);
    cout<<endl;
    cout<<"Choose one action: ";
    cin>>choice;
    if(choice=='a'){
    testplayer1.situation(6);
    testplayer1.situation(7);
    testplayer1.situation(8,4);
    return 0;
    }
    if(choice=='b'){
    testplayer1.situation(24);
    testplayer1.situation(25);
    testplayer1.situation(26,4);
    return 0;
    }
    if(choice=='c'){
    testplayer1.situation(27);
    testplayer1.situation(28);
    testplayer1.situation(29,4);
    cout<<endl;
    cout<<"Choose one action: ";
    cin>>choice;
      if(choice=='a'){
      testplayer1.situation(30);
      testplayer1.situation(31);
      testplayer1.situation(32,4);
      return 0;
      }
      if(choice=='b'){
      testplayer1.situation(33);
      testplayer1.situation(34);
      testplayer1.situation(35,4);
      return 0;
      }
      if(choice=='c'){
      testplayer1.situation(36);
      testplayer1.situation(37);
      testplayer1.situation(38,4);
      return 0;
      }
      if(choice=='d'){
        testplayer.coversave(inputuser,"27",username2);
        return 0;
      }
    }
    if(choice=='d'){
        testplayer.coversave(inputuser,"3",username2);
        return 0;
    }
}
if(location=="9"){
     testplayer1.situation(9);
    testplayer1.situation(10);
    testplayer1.situation(11,4);
    cout<<endl;
    cout<<"Choose one action: ";
    cin>>choice;
    if(choice=='a'){
      testplayer1.situation(12);
      testplayer1.situation(13);
      testplayer1.situation(14,4);
      testplayer1.award(14);
      return 0;
    }
    if(choice=='b'){
      testplayer1.situation(15);
      testplayer1.situation(16);
      testplayer1.situation(17,4);
      testplayer1.award(17);
      return 0;
    }
    if(choice=='c'){
      testplayer1.situation(18);
      testplayer1.situation(19);
      testplayer1.situation(20,4);
      testplayer1.award(20);
      return 0;
    }
    if(choice=='d'){
        testplayer.coversave(inputuser,"9",username2);
        return 0;
    }
}
if(location=="0"){
    testplayer1.situation(0);
testplayer1.situation(1);
testplayer1.situation(2,4);
cout<<endl;
cout<<"Choose one action: ";
cin>>choice;
if(choice=='a'){
    testplayer1.situation(3);
    testplayer1.situation(4);
    testplayer1.situation(5,4);
    cout<<endl;
    cout<<"Choose one action: ";
    cin>>choice;
    if(choice=='a'){
    testplayer1.situation(6);
    testplayer1.situation(7);
    testplayer1.situation(8,4);
    return 0;
    }
    if(choice=='b'){
    testplayer1.situation(24);
    testplayer1.situation(25);
    testplayer1.situation(26,4);
    return 0;
    }
    if(choice=='c'){
    testplayer1.situation(27);
    testplayer1.situation(28);
    testplayer1.situation(29,4);
    cout<<endl;
    cout<<"Choose one action: ";
    cin>>choice;
      if(choice=='a'){
      testplayer1.situation(30);
      testplayer1.situation(31);
      testplayer1.situation(32,4);
      return 0;
      }
      if(choice=='b'){
      testplayer1.situation(33);
      testplayer1.situation(34);
      testplayer1.situation(35,4);
      return 0;
      }
      if(choice=='c'){
      testplayer1.situation(36);
      testplayer1.situation(37);
      testplayer1.situation(38,4);
      return 0;
      }
      if(choice=='d'){
        testplayer.coversave(inputuser,"27",username2);
        return 0;
      }
    }
    if(choice=='d'){
        testplayer.coversave(inputuser,"3",username2);
        return 0;
    }
}
if(choice=='b'){
    testplayer1.situation(21);
    testplayer1.situation(22);
    testplayer1.situation(23,4);
    testplayer1.award(23);
    return 0;
}
if(choice=='c'){
    testplayer1.situation(9);
    testplayer1.situation(10);
    testplayer1.situation(11,4);
    cout<<endl;
    cout<<"Choose one action: ";
    cin>>choice;
    if(choice=='a'){
      testplayer1.situation(12);
      testplayer1.situation(13);
      testplayer1.situation(14,4);
      testplayer1.award(14);
      return 0;
    }
    if(choice=='b'){
      testplayer1.situation(15);
      testplayer1.situation(16);
      testplayer1.situation(17,4);
      testplayer1.award(17);
      return 0;
    }
    if(choice=='c'){
      testplayer1.situation(18);
      testplayer1.situation(19);
      testplayer1.situation(20,4);
      testplayer1.award(20);
      return 0;
    }
    if(choice=='d'){
        testplayer.coversave(inputuser,"9",username2);
        return 0;
    }
}
if(choice=='d'){
        testplayer.coversave(inputuser,"0",username2);
        return 0;
}
}
   return 0;
}
}
