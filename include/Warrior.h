#ifndef WARRIOR_H
#define WARRIOR_H
#include"Hero.h"
class Warrior:public Hero{
	public:
		Warrior(string nam,int lv,int health,int strg,int dex,int ag,int mon,int expr,int A,int FS,int LS,int IS,int W ,int P);
		void setWarriorsStat();
};
#endif
