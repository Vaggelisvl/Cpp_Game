#include"Spell.h"
#include <string>
Spell::Spell(string nam,int c,int mlevel,int dfield,int magic){
			this->amount_of_magic=magic;
			this->cost=c;
			this->name=nam;
			this->damage_field=dfield;
			this->minim_level=mlevel;
		}
		Spell::Spell(){
		}
		string Spell::getName(){
			return this->name;
		}
	
		int Spell::getValue(){
			return this->cost;
		}
		int Spell::getMin_Level(){
			return this->minim_level;
		}
		string Spell::setName(string n){
			this->name=n;
		}
		int Spell::setValue(int v){
			this->cost=v;
		}
		int Spell::setMin_Level(int ml){
			this->minim_level;
		}
		int Spell::ReturnAmountMagic(){
			return this->amount_of_magic;
		}
		string Spell::Get_Name(){
			return this->name;
		}
int Spell::Get_damage(){
			return this->damage_field;
		}
