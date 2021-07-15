#include"Potion.h"
Potion::Potion(string nam,int lv,int mle,int p,string which_one):Item(nam,lv,mle){

			this->hasBeenused=false;
			this->per=p;
			this->Category=which_one;

			
		}	
Potion::Potion():Item(){
			cout<<"Error"<<endl;
		}	 
string Potion::get_cat(){
	   return this->Category;}
		
int Potion::Get_per(){
			return per;
		}
