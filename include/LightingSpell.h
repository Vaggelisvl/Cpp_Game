#ifndef LIGHTINGSPELL_H
#define LIGHTINGSPELL_H
#include "Spell.h"
#include<iostream>

class LightingSpell:public Spell{
	public:
		LightingSpell(string nam,int co, int mlev,int dafield,int mg,int rai,int r);
		LightingSpell();
	private:
		int reduceAbilityign;
		int rounds;
};
#endif
