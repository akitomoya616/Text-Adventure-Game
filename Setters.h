#ifndef SE_H
#define SE_H

#include <iostream>
#include <fstream>
using namespace std;

class Setters{
public:
        Setters();
		Setters(string, string,string);
		~Setters();

		bool setsave(string,string,string);//
		string loadsave(string);
		string getsavename();//
		int getsavelocation();//

		void deletedata(string);
		void returntouserfile(string);

		int loadsavefile(string);//
		int loadgamefile(string);
		string savedata[10][2];//
		string gamedata[39][4];//
		int checkuserload(string);//

		bool coversave(string,string,string);

        int currentLoadLocation;//
        string currentName;//


};
#endif // SE_H
