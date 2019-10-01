#ifndef PL_H
#define PL_H

#include <iostream>
using namespace std;

class Play{
public:
    Play();
    Play(string, string);
    ~Play();

    void award(int);//

    int playerlocation;//
    string playername;//
    string getsavename();//
    int getsavelocation();//


    bool loadgamefile2(string);
    string gamedata2[39][4];
    int awardcounter;

    void situation(int);
    void situation(int,int);

    int currentLoadLocation2;//
    string currentName2;//
};
#endif
