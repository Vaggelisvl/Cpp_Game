#include"Inventory.h"
Inventory::Inventory(){
			this->Ice_counter=0;
			this->Weapon_counter=0;
			this->FireSpell_counter=0;
			this->Light_counter=0;
			this->Armor_counter=0;
			this->Potion_counter=0;
			this->Ice=new IceSpell*[2];
			this->Fire=new FireSpell*[2];
			this->Wep=new Weapon*[5];
			this->Light=new LightingSpell*[2];
			this->Pot=new Potion*[2];
			this->Ar=new Armor*[2];
		}
Inventory::~Inventory(){
			delete[] this->Ice;
			delete[] this->Fire;
			delete[] this->Wep;
			delete[] this->Light;
			delete[] this->Pot;
			delete[] this->Ar;
		}
int Inventory::check(int k){
			if(k==1){
			for(int i=0;i<this->Armor_counter;i++){
				
					if(this->Ar[i]->check_use()){
						cout<< this->Ar[i]<<endl;
						return i;
					}
			}
		}  if(k==2){
		
		    for(int p=0;p<this->Weapon_counter;p++){
		    	if(this->Wep[p]->check_use()){
						cout<< this->Wep[p]<<endl;
						return p;
			}
		}}}
int Inventory::Ret_DM_AB(){
		for(int i=0;i<this->Armor_counter;i++){
	     	if(this->Ar[i]->check_use()){
				this->total_Hero_def=this->Ar[i]->get_Dam_ab();	}
			}
			return this->total_Hero_def;
}
int Inventory::Get_Pot_cat(string n){
			for(int i=0;i<2;i++){if(Pot[1]->get_cat()==n){return Pot[i]->Get_per();}};
		}
bool Inventory::Set_Ic(IceSpell &Ic){
			if(this->Ice_counter<2){
				this->Ice[Ice_counter++]=&Ic;
				cout<<"Item added successfully!!!"<<endl;
				return true;
			}else{
				cout<<"Limit excessed"<<endl;
				return false;
			}
		}
IceSpell& Inventory::Remove_Ice(IceSpell &Ic){
			if(this->Ice_counter==0){
				IceSpell  Ic;
				return Ic;
			}
			
			Ic=*(this->Ice[--(this->Ice_counter)]);
			cout<<Ic.Get_Name()<<"has successfully been removed!"<<endl;
		}
bool Inventory::Set_Fi(FireSpell &Fr){
			if(this->FireSpell_counter<2){
				this->Fire[FireSpell_counter++]=&Fr;
				cout<<"Item added successfully!!!"<<endl;
				return true;
			}else{
				cout<<"Limit excessed"<<endl;
				return false;
			}
		}
FireSpell&Inventory::Remove_Fire(FireSpell &Fr){
			if(this->FireSpell_counter==0){
				FireSpell Fr;
				return Fr;
			}
			Fr=*(this->Fire[--(this->FireSpell_counter)]);
			cout<<Fr.Get_Name()<<"has successfully been removed!"<<endl;
		}
bool Inventory::Set_Weapon(Weapon &We){
			if(this->Weapon_counter<2){
				this->Wep[Weapon_counter++]=&We;
				cout<<"Item added successfully!!!"<<endl;
				return true;
			}else{
				cout<<"Limit excessed"<<endl;
				return false;
			}
		}
Weapon&Inventory::Remove_Weapon(Weapon &We){
			if(this->Weapon_counter==0){
				Weapon We;
				return We;
			}
			We=*(this->Wep[-(this->Weapon_counter)]);
			cout<<We.getName()<<"has successfully been removed!"<<endl;
		}
void Inventory::Weapon_Usage_all_Off(){
			for(int i=0;i<this->Weapon_counter;i++){
				this->Wep[i]->set_usage_OFF();
			}
		}
void Inventory::Weapon_Usage_set(int i){
			this->Wep[i]->set_usage_ON();
		}
bool Inventory::Set_Light(LightingSpell &Li){
			if(this->Light_counter<2){
				
				this->Light[Light_counter++]=&Li;
				cout<<"Item added successfully!!!"<<endl;
				return true;
			}else{
				cout<<"Limit excessed"<<endl;
				return false;
			}
		}
LightingSpell& Inventory::Remove_Light(LightingSpell &Li){
			if(this->Light_counter==0){
				LightingSpell Li;
				return Li;
			}
			
			Li=*(this->Light[--(this->Light_counter)]);
			cout<<Li.Get_Name()<<"has successfully been removed!"<<endl;
		}
bool Inventory::Set_Armor(Armor &Arm){
			if(this->Armor_counter<2){
				this->Ar[Armor_counter++]=&Arm;
				cout<<"Item added successfully!!!"<<endl;
				return true;
			}else{
				cout<<"Limit excessed"<<endl;
				return false;
			}
		}
Armor& Inventory::Remove_Armor(Armor &Arm){
			if(this->Armor_counter==0){
				Armor Arm;
				return Arm;
			}
			Arm=*(this->Ar[--(this->Armor_counter)]);
			cout<<Arm.getName()<<"has successfully been removed!"<<endl;
		}
void Inventory::Armor_Usage_all_Off(){
			for(int i=0;i<this->Armor_counter;i++){
				this->Ar[i]->set_usage_OFF();
			}
		}
void Inventory::Armor_Usage_set(int i){
			this->Ar[i]->set_usage_ON();
		}
int Inventory::Sp_Damage(int i,int spell){
			if(spell==1){
				return this->Ice[i]->Get_damage();
			}else if(spell==2){
				return this->Light[i]->Get_damage();
			}else{
				return this->Fire[i]->Get_damage();
			}
			
		}
bool Inventory::Set_Potion(Potion &Po){
			if(this->Potion_counter<2){
				this->Pot[Potion_counter++]=&Po;
				cout<<"Item added successfully!!!"<<endl;
				return true;
			}else{
				cout<<"Limit excessed"<<endl;
				return false;
			}
		}
	     
Potion& Inventory::Remove_Potion( Potion &Po){
			if(this->Potion_counter==0){
				Potion Po;
				return Po;
			}
			Po=*(this->Pot[--(this->Potion_counter)]);
			cout<<Po.getName()<<"has successfully been removed!"<<endl;
		}
		
void Inventory::Print_Inventory(int k){
			for(int i=0;i<2;i++){
				if(k==1){
					cout<<"|--------------------|"<<endl;
					cout<<this->Ar[i]->getName()<<endl;
				}
				if(k==2){
					cout<<"|--------------------|"<<endl;
					cout<<this->Fire[i]->getName()<<endl;
				}
				if(k==3){
					cout<<"|--------------------|"<<endl;
					cout<<this->Ice[i]->getName()<<endl;
				}
				if(k==4){
					cout<<"|--------------------|"<<endl;
					cout<<this->Pot[i]->getName()<<endl;
				}
				if(k==6){
					cout<<"|--------------------|"<<endl;
					cout<<this->Light[i]->getName()<<endl;
				}
				
			}
			for(int j=0;j<2;j++){
				if(k==5){
				cout<<"|--------------------|"<<endl;
				cout<<this->Wep[j]<<endl;
			}}
		}
int Inventory::Get_Per_Pot(int n){
			return this->Pot[n]->Get_per();
		}
string Inventory::Get_cat_Pot(int n){
			return this->Pot[n]->get_cat();
		}
int Inventory::Ret_Current_Weapon_Damage(int i){
	return this->Wep[i]->getDam();
}
