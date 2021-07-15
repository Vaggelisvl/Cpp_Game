#ifndef ARMOR_H
#define ARMOR_H
#include"Item.h"
#include<iostream>
using namespace std;
class Armor:public Item{
	public:
		Armor(string nam,int lv,int mle,int dam_ab);
		Armor();
		int get_Dam_ab();
	private:
		int Damage_absorve;
	
};
#endif

