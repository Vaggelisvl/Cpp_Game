#ifndef PALADIN_H
#define PALADIN_H
#include"Hero.h"
class Paladin:public Hero{
	public:
		Paladin(string nam,int lv,int health,int strg,int dex,int ag,int mon,int expr,int A,int FS,int LS,int IS,int W ,int P);
	void setPaladinStatus();
	};
#endif
