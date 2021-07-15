#ifndef POTION_H
#define POTION_H
#include "Item.h"
#include<iostream>
using namespace std;
class Potion:public Item{
	public:
		Potion(string nam,int lv,int mle,int p,string which_one);
		Potion(); 
       string get_cat();
		int Get_per();
	private:
		string Category;
		bool hasBeenused;
		int per;
		//int Category[6];
};
#endif
