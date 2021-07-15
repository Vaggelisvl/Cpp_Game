#ifndef SPELL_H
#define SPELL_H
#include <string>
using namespace std;
class Spell{
	public:
		Spell(string nam,int c,int mlevel,int dfield,int magic);
		Spell();
		string getName();
	
		int getValue();
		int getMin_Level();
		string setName(string n);
		int setValue(int v);
		int setMin_Level(int ml);
		int ReturnAmountMagic();
		string Get_Name();
		int Get_damage();
	private:
		string name;
		int cost;
		int minim_level;
		int damage_field;
		int amount_of_magic;//you must reduce it from player
		bool IsInUse;
};

#endif
