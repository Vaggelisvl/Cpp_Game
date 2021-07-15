#include "Sorcerer.h"
Sorcerer::Sorcerer(string nam,int lv,int health,int strg,int dex,int ag,int mon,int expr,int A,int FS,int LS,int IS,int W ,int P):Hero(nam,lv,health,strg,dex,ag,mon,expr,A,FS,LS,IS,W,P){
		}
void Sorcerer::setSorcererSt(){
	this->agility*=2;
	this->dexterity*=2;
}	
