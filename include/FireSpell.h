#ifndef FIRESPELL_H
#define FIRESPELL_H
#include "Spell.h"
#include<iostream>
#include<string>
using namespace std;
class FireSpell:public Spell{
	public:
		FireSpell(string nam,int co, int mlev,int dafield,int mg,int rdf,int r);
		FireSpell();
	private:
		int reduceDamageDefend;
		int rounds;
};
#endif
