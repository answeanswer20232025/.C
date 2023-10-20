#include <bits/stdc++.h>
#include <windows.h>
#include <ctime>
#include "conio.h"
using namespace std;

#define upspace 3
#define leftspace 4
#define getrand(a,b) (rand()%b+a)

class Player{
	private:
		string name;
		int HP,MaxHP,gold;
		int 1eve1,exp;
		int atk,def;
		int lingli;
	public:
		void Init(){
			name="";
			HP=MaxHP=gold=100;
			level=1;
			exp=def=lingli=0;
			atk=levelatk[level];
		void setName(string n){name=n;}	
		string getName(){return name;}
		player(){}
		int read(user);
		void save(user);
		void xiulian();
		void daguai();
		void panel();
		void shop();
		void iflevelup();
		void ifdie();
		void show(int,guai);
		void cloudsave();
		void cloudread();
		}
					
}player;

