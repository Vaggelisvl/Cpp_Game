#include"Armor.h"
Armor::Armor(string nam,int lv,int mle,int dam_ab):Item(nam,lv,mle){
			this->Damage_absorve=dam_ab;
		}
Armor::Armor():Item(){
		   cout<<"Error"<<endl;
		}
int Armor::get_Dam_ab(){
	return this->Damage_absorve;
}
