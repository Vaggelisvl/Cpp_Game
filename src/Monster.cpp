#include"Monster.h"
Monster::Monster(string nam,int lv,int heal,int dam,int def,int poss):Living(nam,lv,heal){
			this->isAlive=true;
			this->damage=dam;
			this->defence=def;
			this->possibility=poss;
		}
int Monster::reduceDef(int hit){
			this->defence+=-hit;
		}
void Monster::displayStats(){
			cout<<"Name of Living"<<this->name<<endl;
			cout <<"Current Level: "<<this->healthPower<<endl;
			cout<<"Current HealthPower: "<<this->healthPower<<endl;
			cout<<"Damage that can cause: "<<this->damage<<endl;
			cout<<"Possiblity: "<<this->possibility<<endl;
			cout<<"Defence that has: "<<this->defence<<endl;
		}
int Monster::damRet(){
	return this->damage;
}
