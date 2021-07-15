#ifndef INVENTORY_H
#define INVENTORY_H
#include"Armor.h"
#include"LightingSpell.h"
#include"IceSpell.h"
#include"FireSpell.h"
#include"Weapon.h"
#include"Potion.h"
class Inventory{
	public:
		Inventory();
		~Inventory();
		int check(int k);
	
		int Get_Pot_cat(string n);
		bool Set_Ic(IceSpell &Ic);
		IceSpell& Remove_Ice(IceSpell &Ic);
		bool Set_Fi(FireSpell &Fr);
		FireSpell&Remove_Fire(FireSpell &Fr);
		bool Set_Weapon(Weapon &We);
		Weapon&Remove_Weapon(Weapon &We);
		void Weapon_Usage_all_Off();
		void Weapon_Usage_set(int i);
		bool Set_Light(LightingSpell &Li);
		LightingSpell&Remove_Light(LightingSpell &Li);
		bool Set_Armor(Armor &Arm);
		Armor&Remove_Armor(Armor &Arm);
		void Armor_Usage_all_Off();
		void Armor_Usage_set(int i);
		int Sp_Damage(int i,int spell);
		bool Set_Potion(Potion &Po);
		Potion&Remove_Potion( Potion &Po);
		void Print_Inventory(int k);
		int Get_Per_Pot(int n);
		string Get_cat_Pot(int n);
		int Ret_Current_Weapon_Damage(int i);
		int Ret_DM_AB();
	private:
		int total_Hero_def;
		int Ice_counter;
		int Weapon_counter;
		int FireSpell_counter;
		int Light_counter;
		int Armor_counter;
		int Potion_counter;
		IceSpell** Ice;
		Weapon** Wep;
		LightingSpell** Light;
		FireSpell** Fire;
		Armor** Ar;
		Potion** Pot;
};
#endif
