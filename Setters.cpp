#include <iostream>
#include <fstream>
#include "Setters.h"

using namespace std;


int split(string str,char a,string words[],int size){
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


Setters::Setters(string newusername,string loadfilename,string gametextname){
int jud1=loadsavefile(loadfilename);
int jud2=loadgamefile(gametextname);
int jud3=checkuserload(newusername);
currentName=newusername;
}

Setters::Setters(){

}

Setters::~Setters(){

}

bool Setters::setsave(string savefile,string pos,string name){
 bool jud1=true;
      string a;
      int i=0;
      int g=0;
      string savedata[10][2];
      string words[2];
      ifstream data1;
      data1.open(savefile);
        if(data1.fail()){
         jud1=false;
         cout<<"error: cannot read userfile"<<endl;
         return jud1;
        }
      while(getline(data1,a)){
        split(a,',',words,2);
        savedata[g][0]=words[0];
        savedata[g][1]=words[1];
        g++;
      }
bool jud2=false;
 for(int e=0;e<10;e++){
      if(savedata[e][0]==""){
            jud2=true;
      savedata[e][0]=name;
      savedata[e][1]=pos;
      break;
      }
      }
      ofstream data2;
      string line;
      data2.open(savefile);
      for(int e=0;e<10;e++){
            if(savedata[e][0]!=""){

        data2<<savedata[e][0]<<','<<savedata[e][1]<<endl;
            }
      }
      if(jud2==false){
        cout<<"sorry, no space for you to save user file"<<endl;
      }
      else{
        cout<<"user saved!"<<endl;
      }
data1.close();
data2.close();
      return jud1;
}

void Setters::returntouserfile(string filename){
  ofstream file3;
  file3.open(filename);
  for(int r=0;r<10;r++){
    file3<<savedata[r][0]<<','<<savedata[r][1]<<endl;
  }
  cout<<"data saved in the file"<<endl;
}

string Setters::getsavename(){
    return currentName;
}

int Setters::getsavelocation(){
    return currentLoadLocation;
}

int Setters::checkuserload(string checkload){
    cout<<"checking userload......"<<endl;
    bool judc=true;
      for(int l=0;l<10;l++){
        if(savedata[l][0]==checkload){
            judc=false;
            return 0;
        }
      }

      return 1;
}

void Setters::deletedata(string deletename){
    for(int i=0;i<10;i++){
        if(savedata[i][0]==deletename){
            savedata[i][1]=="";
        }
    }
}

int Setters::loadsavefile(string savefile){
 bool jud1=true;
      string a;
      int i=0;
      int g=0;
      string words[2];
      ifstream data1;
      data1.open(savefile);
        if(data1.fail()){
         jud1=false;

         return 0;
        }
      while(getline(data1,a)){
        split(a,',',words,2);
        savedata[g][0]=words[0];
        savedata[g][1]=words[1];
        g++;
      }
      data1.close();


      return 1;
}

int Setters::loadgamefile(string gamefile){
 bool jud2=true;
      string a;
      int i=0;
      int g=0;
      string words2[4];
      ifstream data2;
      data2.open(gamefile);
        if(data2.fail()){
         jud2=false;

         return 0;
        }
      while(getline(data2,a)){
        split(a,',',words2,4);
        gamedata[i][0]=words2[0];
        gamedata[i][1]=words2[1];
        gamedata[i][2]=words2[2];
        gamedata[i][3]=words2[3];
        i++;
      }
      data2.close();

      return 1;
}

string Setters::loadsave(string usernamenow){
    for(int l=0;l<10;l++){
        if(usernamenow==savedata[l][0]){
            return savedata[l][1];
        }
    }
}

bool Setters::coversave(string coverfile,string pos2,string covername){
bool jud1=true;
      string a;
      int i=0;
      int g=0;
      string savedata[10][2];
      string words[2];
      ifstream data1;
      data1.open(coverfile);
        if(data1.fail()){
         jud1=false;
         cout<<"error: cannot read userfile"<<endl;
         return jud1;
        }
      while(getline(data1,a)){
        split(a,',',words,2);
        savedata[g][0]=words[0];
        savedata[g][1]=words[1];
        g++;
      }
bool jud2=false;
 for(int e=0;e<10;e++){
      if(savedata[e][0]==covername){
            jud2=true;
      savedata[e][0]=covername;
      savedata[e][1]=pos2;
      break;
      }
      }
      ofstream data2;
      string line;
      data2.open(coverfile);
      for(int e=0;e<10;e++){
            if(savedata[e][0]!=""){

        data2<<savedata[e][0]<<','<<savedata[e][1]<<endl;
            }
      }
      if(jud2==false){
        cout<<"sorry, no space for you to save user file"<<endl;
      }
      else{
        cout<<"user saved!"<<endl;
      }
data1.close();
data2.close();
      return jud1;
}
