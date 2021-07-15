#ifndef MARKET_H
#define MARKET_H
#include"Armor.h"
#include"LightingSpell.h"
#include"IceSpell.h"
#include"FireSpell.h"
#include"Weapon.h"
#include"Potion.h"
#include"Warrior.h"
#include"Weapon.h"
#include"Sorcerer.h"
#include"Paladin.h"
class Market{
	public:
		Market();
		void Market_fill_up(LightingSpell &L,Weapon &W,IceSpell &Ic,Potion &P,FireSpell &F,Armor &Ar);
		void printMarket();
		LightingSpell* Light_ret(int i);		
IceSpell*Ice_ret(int i);
Armor *Armor_ret(int i);
Potion*Pot_ret(int i);
FireSpell*Fire_ret(int i);
Weapon*Wep_ret(int i);
void Market_Menu_And_Transmisions(Sorcerer *S,Warrior *W,Paladin *Pa);
	private:
///////////////////the array of items that user can buy-sell////////////////////////////////////
		Weapon ** WEP=new Weapon*[15];
	    LightingSpell** LIGHT=new LightingSpell*[10];
	    FireSpell** FIRE=new FireSpell*[10];
	    Armor** ARM=new Armor*[10];
        Potion** POT=new Potion*[10];
        IceSpell**ICE=new IceSpell*[10];
        
		int fireCounter;
		int LightCounter;
		int PotCounter;
		int WepCounter;
		int IceCounter;
		int ArmorCounter;
};
#endif
