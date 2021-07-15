#ifndef WARRIOR_H
#define WARRIOR_H
#include"Hero.h"
#include<iostream>
#include <cstdlib>
Hero::Hero(string nam,int lv,int health,int strg,int dex,int ag,int mon,int expr,int A,int FS,int LS,int IS,int W ,int P):Living(nam,lv,health){
		//	this->healthPower=power;
			this->strength=strg;
			this->dexterity=dex;
			this->agility=ag;
			this->money=mon;
			this->experience=expr;
			this->IV=new Inventory();
			this->agility=0;
		}
void Hero::Print_info_Hero(){
			cout<<"|Hero's Level is:|"<<endl;
			cout<<this->healthPower<<endl;
			cout<<"------------------"<<endl;
			cout<<"|Hero's Level is:|"<<endl;
			cout<<this->level<<endl;
			cout<<"------------------"<<endl;
			cout<<"|Hero's Dexterity is:|"<<endl;
			cout<<this->dexterity<<endl;
			cout<<"------------------"<<endl;
			cout<<"|Hero's MagicPower is:|"<<endl;
			cout<<this->magicPower<<endl;
			cout<<"------------------"<<endl;
			cout<<"|Hero's Strength is:|"<<endl;
			cout<<this->strength<<endl;
			cout<<"------------------"<<endl;
			cout<<"|Hero's Money is:|"<<endl;
			cout<<this->money<<endl;
			cout<<"|----------------|"<<endl;
		}
int Hero::attack(Spirit &S,Exosceleton &E,Dragon &D){
	        cout<<"You've attacked using the Weapon: ";
	        int flag=0;
			int i=this->IV->check(2);
			int dammage=IV->Ret_Current_Weapon_Damage(i);
			int ca;//check armor
			int tmp1;
			int tmp;
			int temp=1+rand()%3;//random monster to attack
			if(temp==1){
			dammage+=this->strength;
			tmp1=0;
			tmp=S.retHealth();
			ca=S.reduceDef(dammage);
			if(ca!=0){
				tmp1=tmp-ca;
			}else{
				
				flag=1;
			}
			if(tmp1<0&&flag!=1){
				S.setHealth(0);
				cout<<"Monster has died"<<endl;
			}else{
				S.setHealth(tmp1);
			}
			}else if(temp==2){
			dammage+=this->strength;
			tmp1=0;
			tmp=E.retHealth();
			ca=E.reduceDef(dammage);
			if(ca!=0){
				tmp1=tmp-ca;
			}else{
				
				flag=1;
			}
			if(tmp1<0&&flag!=1){
				E.setHealth(0);
				cout<<"Monster has died"<<endl;
			}else{
				S.setHealth(tmp1);
			}
			}else{
			dammage+=this->strength;
			tmp1=0;
			tmp=D.retHealth();
			ca=D.reduceDef(dammage);
			if(ca!=0){
				tmp1=tmp-ca;
			}else{
				
				flag=1;
			}
			if(tmp1<0&&flag!=1){
				D.setHealth(0);
				cout<<"Monster has died"<<endl;
			}else{
				D.setHealth(tmp1);
			}
				
			}
		}
int Hero::ret_Arm_D(){
	return this->IV->Ret_DM_AB();
}
int Hero::castSpell(){
			int opt,op;
			cout<<"Which category of Spell do you want to use?"<<endl;
			cout<<"Type:1--> Ice,2-->Fire,3-->LIght";
			cin>>opt;
	         do{
			if(opt!=1&&opt!=2&&opt!=3){
				cout<<"Ooopsss Wrong Choice"<<endl;
			}
			cin>>opt;
		}while(opt!=1&&opt!=2&&opt!=3);
		if(opt==1){
			cout<<"Which do you want to use?"<<endl;
			this->IV->Print_Inventory(3);
			cin>>op;
			return this->IV->Sp_Damage(op,1);
			
		}else if(opt==2){
			cout<<"Which do you want to use?"<<endl;
			this->IV->Print_Inventory(2);
			cin>>op;
			return this->IV->Sp_Damage(op,3);
		}else{
			cout<<"Which do you want to use?"<<endl;
			this->IV->Print_Inventory(6);
			cin>>op;
			return this->IV->Sp_Damage(op,2);
		}
		}
		bool Hero::buy_armor(Armor &ar){
			if(this->An<AR){
			 this->IV->Set_Armor(ar);
				return true;
			}else{
				cout<<"You cant exceed the limit of "<<this->AR<<" Armors"<<endl;
				return false;
			}
		}
		bool Hero::buy_LightingSpell(LightingSpell&ls){
			if(this->Ln<L){
				this->IV->Set_Light(ls);
				return true;
			}else{
				cout<<"You cant exceed the limit of "<<this->L<<" LightingSpell"<<endl;
				return false;
			}
		}
int Hero::ret_fight_status(){
	return this->Fight_status;
}
int Hero::getStrength(){
			return this->strength;
		}
int Hero::LevelUp(int levl){
			this->level=levl;
		}
int Hero::setStrength(int st){
			this->strength=st;
		}
int Hero::getMoney(){
			return this->money;
		}
int Hero::setMoney(int amount){
			this->money=amount;
		}
int Hero::setAgility(int ag){
			this->agility=ag;
		}
int Hero::setDexterity(int dex){
			this->dexterity=dex;
		}
bool Hero::Fight_Status_ON(){
			this->Fight_status=true;
		}
bool Hero::Fight_Status_OFF(){
			this->Fight_status=false;
		}
void Hero::checkInventory(){
			cout<<"Lighting Spells "<<endl;
		    IV->Print_Inventory(6);
		    cout<<"Armors are "<<endl;
		    this->IV->Print_Inventory(1);
//		    cout<<"Ice  Spells "<<endl;
//		    this->IV->Print_Inventory(3);
//		    cout<<"Fire Spells "<<endl;
//		    this->IV->Print_Inventory(2);
		    cout<<"Potions are"<<endl;
		    this->IV->Print_Inventory(4);
		    cout<<"Weapons are"<<endl;
		    this->IV->Print_Inventory(5);
		}
void Hero::equip(){
        	int opt,opt1;
        	cout<<"The following options for armor are:"<<endl;
        	this->IV->Print_Inventory(1);
        	cout<<"Which one you want to equip?-Type 3 for None"<<endl;
        	cin>>opt;
        	if(opt>3&&opt<1){
        		cout<<"Error!!Not that option!!"<<endl;
			}else if(opt==3){
				cout<<"You're using the following :"<<endl;
					this->IV->check(1);
			}else{
				this->IV->Weapon_Usage_all_Off();
				this->IV->Weapon_Usage_set(opt);
			}
			cout<<"The following options for Weapons are:"<<endl;
        	this->IV->Print_Inventory(5);
        	cout<<"Which one you want to equip?-Type 3 for None"<<endl;
        	cin>>opt1;
        	if(opt1>5&&opt1<1){
        		cout<<"Error!!Not that option!!"<<endl;
			}else if(opt==3){
				cout<<"You're using the following :"<<endl;
					this->IV->check(2);
			}else{
				//Not so efficient
				this->IV->Armor_Usage_all_Off();
				this->IV->Armor_Usage_set(opt);	
			}
		}
void Hero::use(){
			int opt,newp;
			cout<<"Which of the following Potions do you want to use?-Type 3 for None(exit)"<<endl;
			this->IV->Print_Inventory(4);//4 stands for Potion
			cin>>opt;
			if(opt>3&&opt<1){
        		cout<<"Error!!Not that option!!"<<endl;
			}else if(opt==1||opt==2){
				string res=this->IV->Get_cat_Pot(opt);
				if(res=="magicPower"){
					newp=this->IV->Get_Per_Pot(opt)*(this->magicPower);
					this->magicPower=newp;
				}
				if(res=="strength"){
					newp=this->IV->Get_Per_Pot(opt)*(this->strength);
					this->strength=newp;
				}
				if(res=="dexterity"){
					newp=this->IV->Get_Per_Pot(opt)*(this->dexterity);
					this->strength=newp;
				}
				if(res=="agility"){
					newp=this->IV->Get_Per_Pot(opt)*(this->agility);
					this->agility=newp;
				}
				if(res=="experience"){
					newp=this->IV->Get_Per_Pot(opt)*(this->experience);
					this->experience=newp;
				}
				if(res=="health"){
					newp=this->IV->Get_Per_Pot(opt)*(this->healthPower);
					this->healthPower=newp;
				}
			}
		}
bool Hero::buy(IceSpell &Ic,LightingSpell &Li,Weapon &wep,FireSpell &Fi,Armor &Ar,Potion &Pot,int opt){
			bool fl;
			if(opt==1){//lets assume that 1 is for armors
			     if(Ar.getValue()<=this->money){
				 this->IV->Set_Armor(Ar);
			     return true;
				 this->money=money-Ar.getValue();}
			}else if(opt==2){//lets assume that 2 is for wepons
			      if(wep.getValue()<=this->money){
				  this->money=money-wep.getValue();
				  this->IV->Set_Weapon(wep);
			      return true;}
	    	}else if(opt==3){//lets assume that 3 is for Lighting Spells
	    	    if(Li.getValue()<=this->money){
				this->money=money-Li.getValue();
				this->IV->Set_Light(Li);
	    		return true;}
			}else if(opt==4){//lets assume that 4 is for FireSpells
			    if(Fi.getValue()<=this->money){
				this->money=money-Fi.getValue();
				this->IV->Set_Fi(Fi);
			    return true;}
			}else if(opt==5){//lets assume that 5 is for IceSpells
				if(Ic.getValue()<=this->money){
				this->money-=Ic.getValue();
				this->IV->Set_Ic(Ic);
				return true;}
			}else if(opt==6){//lets assume that 6 is for Potions
			    if(Pot.getValue()<=this->money){
				this->money-=Pot.getValue();
				this->IV->Set_Potion(Pot);
			    return true;}
			}
			return false;
		}
bool Hero::sell(IceSpell &Ic,LightingSpell &Li,Weapon &wep,FireSpell &Fi,Armor &Ar,Potion &Pot,int opt){
			if(opt==1){//lets assume that 1 is for armors
				 this->IV->Remove_Armor(Ar);
			     return true;
				 this->money=money+0.5*(Ar.getValue());
			}else if(opt==2){//lets assume that 2 is for wepons
				  this->money=money+0.5*wep.getValue();
				  this->IV->Remove_Weapon(wep);
			      return true;
	    	}else if(opt==3){//lets assume that 3 is for Lighting Spells
				this->money=money+0.5*Li.getValue();
				this->IV->Remove_Light(Li);
	    		return true;
			}else if(opt==4){//lets assume that 4 is for FireSpells
				this->money=money+0.5*Fi.getValue();
				this->IV->Remove_Fire(Fi);
			    return true;
			}else if(opt==5){//lets assume that 5 is for IceSpells
				this->money+=0.5*Ic.getValue();
				this->IV->Remove_Ice(Ic);
				return true;
			}else if(opt==6){//lets assume that 6 is for Potions
				this->money+=0.5*Pot.getValue();
				this->IV->Remove_Potion(Pot);
			    return true;
			}
			return false;
		}
		
void Hero::displayStats(){
			cout<<"Name of Living"<<this->name<<endl;
			cout <<"Current Level: "<<this->healthPower<<endl;
			cout<<"Current HealthPower: "<<this->healthPower<<endl;
			cout <<"Current experience: "<<this->experience<<endl;
			cout<<"Current magicPower: "<<this->magicPower<<endl;
			cout <<"Current money: "<<this->money<<endl;
			cout<<"Current agility: "<<this->agility<<endl;
		}
#endif
