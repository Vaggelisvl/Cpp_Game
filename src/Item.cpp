#include "Item.h"
Item::Item(string nam,int vl,int level){
			this->name=nam;
			this->value=level;
			this->min_level=vl;
			this->IsInUse=false;
		}
Item::Item(){
		}
string Item::getName(){
			return this->name;
		}
	
int Item::getValue(){
			return this->value;
		}
	
int Item::getMin_Level(){
			return this->min_level;
		}
string Item::setName(string n){
			this->name=n;
		}
int Item::setValue(int v){
			this->value=v;
		}
int Item::setMin_Level(int ml){
			this->min_level;
		}
bool Item::check_use(){
			return this->IsInUse;
		}
void Item::set_usage_ON(){
			this->IsInUse=true;
		}
void Item::set_usage_OFF(){
			this->IsInUse=false;
		}
