#ifndef WEAPON_H
#define WEAPON_H
#include "Item.h"
#include<iostream>
using namespace std;
class Weapon:public Item{
	public:
		Weapon(string nam,int lv,int mle,bool r,bool l,int dam);
		Weapon();
		int getDam();
		bool getLeft();
		bool getRight();
	private:
		bool left;
		bool right;
		int  damage;
};
#endif

