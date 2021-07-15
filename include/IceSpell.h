#ifndef ICESPELL_H
#define ICESPELL_H

#include"Spell.h"

class IceSpell:public Spell{
	public:
		IceSpell(string nam,int co,int mlev,int dafield,int mg,int rDFop,int r);
		IceSpell();
	private:
		int reduceDamageFieldop;
		int rounds;
		
};
#endif
