#include"IceSpell.h"
IceSpell::IceSpell(string nam,int co,int mlev,int dafield,int mg,int rDFop,int r):Spell(nam,co,mlev,dafield,mg){
			this->reduceDamageFieldop=rDFop;
			this->rounds=r;
		}
IceSpell::IceSpell():Spell(){
		//	cout<<"Error"<<endl;
		}

