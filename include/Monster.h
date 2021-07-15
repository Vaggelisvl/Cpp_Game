#ifndef MONSTER_H
#define MONSTER_H
#include"Living.h"
class Monster:public Living{
	public:
		Monster(string nam,int lv,int heal,int dam,int def,int poss);
		int reduceDef(int hit);
		void displayStats();
		int damRet();
	protected:
		int damage;
		int defence;
		int possibility;
};	
#endif
