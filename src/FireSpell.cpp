#include"FireSpell.h"
FireSpell::FireSpell(string nam,int co, int mlev,int dafield,int mg,int rdf,int r):Spell(nam,co,mlev,dafield,mg){
			this->reduceDamageDefend=rdf;
			this->rounds=r;
		}
FireSpell::FireSpell():Spell(){
			cout<<"Error"<<endl;
		}
