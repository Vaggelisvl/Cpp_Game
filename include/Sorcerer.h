#ifndef SORCERER_H
#define SORCERER_H
#include"Hero.h"
class Sorcerer:public Hero{
	public:
		Sorcerer(string nam,int lv,int health,int strg,int dex,int ag,int mon,int expr,int A,int FS,int LS,int IS,int W ,int P);
		void setSorcererSt();	
};
#endif
