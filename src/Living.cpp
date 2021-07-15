#include"Living.h"
Living::Living(string nam,int lv,int health){
			this->name=nam;
			this->level=lv;
			this->isAlive=true;
			this->healthPower=health;
		}
//		int get_health(){
//			return this->healthPower;
//		}
void Living::setHealth(int i){
	this->healthPower=i;
}
int Living::retHealth(){
	return this->healthPower;
}
 void Living::displayStats(){
			cout<<"Name of Living"<<this->name<<endl;
			cout <<"Current Level: "<<this->healthPower<<endl;
			cout<<"Current HealthPower: "<<this->healthPower<<endl;
		}
bool Living::chechAlive(){
			if(this->healthPower==0){
				this->isAlive=false;
			}
			return this->isAlive;
		}
