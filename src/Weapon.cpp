#include"Weapon.h"
		Weapon::Weapon(string nam,int lv,int mle,bool r,bool l,int dam):Item(nam,lv,mle){
			this->damage=dam;
			this->right=r;
			this->left=l;
		}
		Weapon::Weapon():Item(){
			cout<<"Error"<<endl;
		}
		int Weapon::getDam(){
			return this->damage;
		}
		bool Weapon::getLeft(){
			return this->left;
		}
		bool Weapon::getRight(){
			return this->right;
		}
