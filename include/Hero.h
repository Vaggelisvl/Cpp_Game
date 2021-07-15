#ifndef HERO_H
#define HERO_H
#include"Inventory.h"
#include"Living.h"
#include"Armor.h"
#include"LightingSpell.h"
#include"IceSpell.h"
#include"FireSpell.h"
#include"Weapon.h"
#include"Potion.h"
#include"Spirit.h"
#include"Exosceleton.h"
#include"Dragon.h"
class Hero:public Living{
	public:
		Hero(string nam,int lv,int health,int strg,int dex,int ag,int mon,int expr,int A,int FS,int LS,int IS,int W ,int P);
		void Print_info_Hero();
		int attack(Spirit &S,Exosceleton &E,Dragon &D);
		int castSpell();
		bool buy_armor(Armor &ar);
		bool buy_LightingSpell(LightingSpell&ls);
	
		int getStrength();
		int LevelUp(int levl);
		int setStrength(int st);
		int getMoney();
		int setMoney(int amount);
		int setAgility(int ag);
		int setDexterity(int dex);
		bool Fight_Status_ON();
		bool Fight_Status_OFF();
		void checkInventory();
        void equip();
		void use();
		bool buy(IceSpell &Ic,LightingSpell &Li,Weapon &wep,FireSpell &Fi,Armor &Ar,Potion &Pot,int opt);
		bool sell(IceSpell &Ic,LightingSpell &Li,Weapon &wep,FireSpell &Fi,Armor &Ar,Potion &Pot,int opt);
		void displayStats();
		int ret_Arm_D();
		int ret_fight_status();
	protected:
		int magicPower;
		int strength;
		int dexterity;
		int agility;
		int experience;
    	int money;
		int An,AR;
		int Ln,L;
		int Wn,WE;
		int Fn,F;
		int Pn,PO;
		int In,I;
		Inventory*IV;
		bool Fight_status;
		int totalMonsters;
	
};
#endif
