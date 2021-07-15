#include"LightingSpell.h"
LightingSpell::LightingSpell(string nam,int co, int mlev,int dafield,int mg,int rai,int r):Spell(nam,co,mlev,dafield,mg){
			this->reduceAbilityign=rai;
			this->rounds=r;
		}
LightingSpell::LightingSpell():Spell(){
			cout<<"Error"<<endl;
		}
