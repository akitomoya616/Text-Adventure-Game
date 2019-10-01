#include <iostream>
#include <fstream>
#include "Play.h"

using namespace std;

int split2(string str,char a,string words[],int size){
    int count=0;
    int b=str.length();
    string temp="";
    int i=0;
    if(str.length()==0)
    return 0;
        for(int x=0;x<b;x++){
                if(str[x]!=a){
            temp=temp+str[x];
        }
        if(str[x]==a){
             words[i]=temp;
             temp="";
             i++;
             count++;
        }
    }
    if(str[b-1]!=a){

        words[i]=temp;
    }
    count++;
    return count;
}

Play::Play(){

}

Play::Play(string username,string playfile2){
playername=username;
loadgamefile2(playfile2);
}

Play::~Play(){

}




bool Play::loadgamefile2(string gamefile){
 bool jud2=true;
      string a;
      int i=0;
      int g=0;
      string words2[4];
      ifstream data2;
      data2.open(gamefile);
      while(getline(data2,a)){
        split2(a,',',words2,4);
        gamedata2[i][0]=words2[0];
        gamedata2[i][1]=words2[1];
        gamedata2[i][2]=words2[2];
        gamedata2[i][3]=words2[3];
        i++;
      }
      data2.close();
      return jud2;
}

void Play::situation(int position){

cout<<gamedata2[position][0]<<endl;

}

void Play::situation(int position,int times){
for(int w=0;w<4;w++){
cout<<gamedata2[position][w]<<"     ";
}
}


void Play::award(int place){
if (place==23){
        cout<<endl;
        cout<<endl;
    cout<<"Achievement unlocked: End the game in one step."<<endl;
}
if (place==14){
        cout<<endl;
        cout<<endl;
    cout<<"Achievement unlocked: He dies at the end."<<endl;
}
if (place==17){
        cout<<endl;
        cout<<endl;
    cout<<"Achievement unlocked: Nightmare."<<endl;
}
if (place==20){
    cout<<endl;
cout<<endl;
    cout<<"Achievement unlocked: Why you want to do that?"<<endl;
}
}
