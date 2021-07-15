#include "Market.h"
Market::Market(){
        	this->ArmorCounter=0;
		    this->fireCounter=0;
		    this->IceCounter=0;
		    this->LightCounter=0;
		    this->WepCounter=0;
		    this->PotCounter=0;
/////////////////initialization///////////////////////////////////
    	WEP[0]=new Weapon("Caladbolg",0,25,0,1,85);
    	WEP[1]=new Weapon("Avenger",2,35,0,1,120);
    	WEP[2]=new Weapon("Knight Sword",2,25,0,1,95);
    	WEP[3]=new Weapon("Stunning Steel",5,40,1,0,130);
    	WEP[4]=new Weapon("Apocalypse",3,30,0,1,110);
    	WEP[5]=new Weapon("Poison Steel",2,30,1,0,100);
    	WEP[6]=new Weapon("Taming Sword",4,20,1,0,80);
    	WEP[7]=new Weapon("Lifesaver",4,30,0,1,100);
    	WEP[8]=new Weapon("Lullaby Steel",10,10,0,1,95);
    	WEP[9]=new Weapon("Master Sword",5,50,0,1,140);
    	WEP[10]=new Weapon("Sidewinder",1,30,1,0,100);
    	WEP[11]=new Weapon("Double-Edge",4,60,1,1,200);
    	WEP[12]=new Weapon("Twilight Steel",3,45,0,1,160);
    	WEP[13]=new Weapon("Ice Brand",1,20,1,0,95);
    	WEP[14]=new Weapon("Lightning Steel",2,35,1,0,150);
		/////////////////////////////////////////////////// 
    	LIGHT[0]=new LightingSpell("Bolt Strike",15,1,10,10,15,2);
    	LIGHT[1]=new LightingSpell("Yakamo’s Wrath",10,0,10,10,10,1);
    	LIGHT[2]=new LightingSpell("Whispered Blade",20,3,10,10,20,3);
    	LIGHT[3]=new LightingSpell("Wrath",5,2,10,10,15,1);
    	LIGHT[4]=new LightingSpell("Cleanse",10,3,10,10,12,2);
    	LIGHT[5]=new LightingSpell("Void",12,0,10,10,10,2);
    	LIGHT[6]=new LightingSpell("Flash",11,0,10,10,5,1);
    	LIGHT[7]=new LightingSpell("Purge",25,2,10,10,20,3);
    	LIGHT[8]=new LightingSpell("Arrow of Purity",7,5,10,10,17,2);
    	LIGHT[9]=new LightingSpell("Blazing Arrows",9,1,2,10,10,1);
    	////////////////////////////////////////////////////	
    	FIRE[0]=new FireSpell("Fire Wings",15,1,10,10,15,2);
    	FIRE[1]=new FireSpell("Inferno",12,0,10,10,10,2);
    	FIRE[2]=new FireSpell("Eruption",25,2,10,10,20,3);
    	FIRE[3]=new FireSpell("Fester",10,3,10,10,12,2);
    	FIRE[4]=new FireSpell("Explosion",9,1,2,10,10,1);
    	FIRE[5]=new FireSpell("Burn the Soul",10,50,0,0,10.10,1);
    	FIRE[6]=new FireSpell("Shade",5,2,10,10,15,1);
    	FIRE[7]=new FireSpell("Flame",11,0,10,10,5,1);
    	FIRE[8]=new FireSpell("Vine",5,2,10,10,15,1);
    	FIRE[9]=new FireSpell("Meteor",25,2,10,10,20,3);
    	//////////////////////////////////////////////////
       	POT[0]=new Potion("Antidote",0,10,10,"Health");
       	POT[1]=new Potion("Smoke Bomb",1,20,10,"Damage");
       	POT[2]=new Potion("Blessed Gem",3,15,20,"Health");
       	POT[3]=new Potion("Dark Matter",2,15,25,"Damage");
       	POT[4]=new Potion("Mana Distiller",4,15,10,"Magic");
       	POT[5]=new Potion("Door to Tomorrow",4,25,40,"Health");
       	POT[6]=new Potion("Pendulum",1,10,15,"Damage");
       	POT[7]=new Potion("Three Stars",2,15,10,"Dexterity");
       	POT[8]=new Potion("Silver Hourglass",3,20,5,"Experience");
       	POT[9]=new Potion("Mana Spring",0,20,30,"Health");
       	///////////////////////////////////////////////////
    	ARM[0]=new Armor("Endless Road",0,10,45);
    	ARM[1]=new Armor("Elemental Shield",1,20,15);
    	ARM[2]=new Armor("Cerulean Shield",2,5,10);
    	ARM[3]=new Armor("Platinum Shield",4,50,50);
    	ARM[4]=new Armor("Serene Shield",3,15,20);
    	ARM[5]=new Armor("Star Shield",1,20,30);
    	ARM[6]=new Armor("Revive Shield",2,30,35);
    	ARM[7]=new Armor("Snow Shield",0,20,25);
    	ARM[8]=new Armor("Light Shield",1,10,15);
    	ARM[9]=new Armor("Shining Shield",2,30,40);
    	////////////////////////////////////////////
    	ICE[0]=new IceSpell("Avalanche",5,2,10,10,15,1);
    	ICE[1]=new IceSpell("Wave",11,0,10,10,5,1);
    	ICE[2]=new IceSpell("Daze",12,0,10,10,10,2);
    	ICE[3]=new IceSpell("Vortex",15,1,10,10,15,2);;
    	ICE[4]=new IceSpell("Whirlwhind",25,2,10,10,20,3);
    	ICE[5]=new IceSpell("Frostbite",5,2,10,10,15,1);
    	ICE[6]=new IceSpell("Wave",10,3,10,10,12,2);
    	ICE[7]=new IceSpell("Freeze",12,0,10,10,10,2);
    	ICE[8]=new IceSpell("Darkness",25,2,10,10,20,3);
    	ICE[9]=new IceSpell("Cyclone",5,2,10,10,15,1);
	
		}
LightingSpell* Market::Light_ret(int i){
	return this->LIGHT[i];
}
IceSpell*Market::Ice_ret(int i){
	return this->ICE[i];
}
Armor *Market::Armor_ret(int i){
	return this->ARM[i];
}
Potion*Market::Pot_ret(int i){
	return this->POT[i];
}
FireSpell*Market::Fire_ret(int i){
	return this->FIRE[i];
}
Weapon*Market::Wep_ret(int i){
	return this->WEP[i];
}
void Market::Market_fill_up(LightingSpell &L,Weapon &W,IceSpell &Ic,Potion &P,FireSpell &F,Armor &Ar){
			if(this->LightCounter<3){
			   this->LIGHT[this->fireCounter++]=&L;
			}
			if(this->fireCounter<3){
				this->FIRE[this->fireCounter++]=&F;
			}
			if(this->IceCounter<3){
				this->ICE[this->IceCounter++]=&Ic;
			}
			if(this->WepCounter<3){
				this->WEP[this->WepCounter++]=&W;
			}
			if(this->PotCounter<3){
				this->POT[this->PotCounter++]=&P;
			}
		}
void Market::printMarket(){
			cout<<"The Lighting Spells are:"<<endl;
			for(int i=0;i<10;i++){
				cout<<"Name: "<<this->LIGHT[i]->getName();
				cout<<" Min Level: "<<this->LIGHT[i]->getMin_Level();
				cout<<" Cost Of Current Item: "<<this->LIGHT[i]->getValue()<<endl;
			}
			cout<<endl<<"The Fire Spells are:"<<endl;
			for(int i=0;i<10;i++){
				cout<<"Name: "<<this->FIRE[i]->getName();
				cout<<" Min Level "<<this->FIRE[i]->getMin_Level();
				cout<<" Cost Of Current Item: "<<this->FIRE[i]->getValue()<<endl;
			}
			cout<<"The Ice Spells are:"<<endl;
			for(int i=0;i<2;i++){
				cout<<"Name: "<<this->ICE[i]->getName();
				cout<<" Min Level: "<<this->ICE[i]->getMin_Level();
				cout<<" Cost Of Current Item: "<<this->ICE[i]->getValue()<<endl;
			}
			cout<<endl<<"The Weapons You Can Buy are:"<<endl;
			for(int i=0;i<15;i++){
				cout<<"Name: "<<this->WEP[i]->getName();
				cout<<" Min Level: "<<this->WEP[i]->getMin_Level();
				cout<<" Cost Of Current Item: "<<this->WEP[i]->getValue()<<endl;
			}
			cout<<endl<<"The Armors You Can Buy are:"<<endl;
			for(int i=0;i<10;i++){
				cout<<"Name: "<<this->ARM[i]->getName();
				cout<<" Min Level: "<<this->ARM[i]->getMin_Level();
				cout<<" Cost Of Current Item: "<<this->ARM[i]->getValue()<<endl;
			}
			cout<<endl<<"The Potions You Can Buy are:"<<endl;
			for(int i=0;i<10;i++){
				cout<<"Name: "<<this->POT[i]->getName();
				cout<<" Min Level "<<this->POT[i]->getMin_Level();
				cout<<" Cost Of Current Item: "<<this->POT[i]->getValue()<<endl;
			}
			
		}
void Market::Market_Menu_And_Transmisions(Sorcerer *S,Warrior *W,Paladin *Pa){
	   IceSpell *I;
		FireSpell*F;
		Potion *P;
		Armor *A;
		Weapon *We;
		LightingSpell *L;
     	int pos,optionn,op,ho;
    	string an,str;
    	an="YES";
			while(an=="YES"||an=="yes"){
			cout<<"Sell ->0, Buy->1"<<endl;
			cin>>op;
			cout<<"For which Hero you want to trade?"<<endl;
			cout<<"Warrior -> 1 |Paladin ->2| Sorcerer->3"<<endl;
			cin>>ho;
			if(ho==1){
			if(op==1){
		    cout<<"Which category of product you want to buy?"<<endl;
		    cin>>str;
		    if(str=="Light"||str=="L"){	
		        cout<<"Which product? "<<endl;
		        cin>>optionn;
		        L=this->LIGHT[optionn];
		       	W->buy(*I,*L,*We,*F,*A,*P,3);
			}else if (str=="Fire"||str=="F"){
			    cout<<"Which product? "<<endl;
		        cin>>optionn;
		        F=this->FIRE[optionn];
		        W->buy(*I,*L,*We,*F,*A,*P,4);
			}else if(str=="Weapons"||str=="W"){
				cout<<"Which product? "<<endl;
		        cin>>optionn;
				We=this->WEP[optionn];
				W->buy(*I,*L,*We,*F,*A,*P,2);
			}else if(str=="Armors"||str=="A"){
				cout<<"Which product? "<<endl;
		        cin>>optionn;
		        A=this->ARM[optionn];
		        W->buy(*I,*L,*We,*F,*A,*P,1);
			}else if(str=="Ice"||str=="I"){
				cout<<"Which product? "<<endl;
		        cin>>optionn;
		        I=this->ICE[optionn];
		        W->buy(*I,*L,*We,*F,*A,*P,5);
			}else if(str=="Potions"||str=="P"){
				cout<<"Which product? "<<endl;
		        cin>>optionn;
		        P=this->POT[optionn];
		        W->buy(*I,*L,*We,*F,*A,*P,6);
			}
			  
		}else if(op==0){
			cout<<"Which category of product you want to Sell?"<<endl;
		    cin>>str;
		    if(str=="Light"||str=="L"){	
		        cout<<"Which product? "<<endl;
		        W->checkInventory();
		        cin>>optionn;
		        L=this->LIGHT[optionn];
		       	W->sell(*I,*L,*We,*F,*A,*P,3);
			}else if (str=="Fire"||str=="F"){
				W->checkInventory();
			    cout<<"Which product? "<<endl;
		        cin>>optionn;
		        F=this->FIRE[optionn];
		        W->sell(*I,*L,*We,*F,*A,*P,4);
			}else if(str=="Weapons"||str=="W"){
				W->checkInventory();
				cout<<"Which product? "<<endl;
		        cin>>optionn;
				We=this->WEP[optionn];
				W->sell(*I,*L,*We,*F,*A,*P,2);
			}else if(str=="Armors"||str=="A"){
				W->checkInventory();
				cout<<"Which product? "<<endl;
		        cin>>optionn;
		        A=this->ARM[optionn];
		        W->sell(*I,*L,*We,*F,*A,*P,1);
			}else if(str=="Ice"||str=="I"){
				W->checkInventory();
				cout<<"Which product? "<<endl;
		        cin>>optionn;
		        I=this->ICE[optionn];
		        W->sell(*I,*L,*We,*F,*A,*P,5);
			}else if(str=="Potions"||str=="P"){
				W->checkInventory();
				cout<<"Which product? "<<endl;
		        cin>>optionn;
		        P=this->POT[optionn];
		        W->sell(*I,*L,*We,*F,*A,*P,6);
			}
		//	 W->checkInventory();
		}
		cout<<"Do you want  to trade again?"<<endl;
			cin>>an;
		}else if(ho==2){
				if(op==1){
		    cout<<"Which category of product you want to buy?"<<endl;
		    cin>>str;
		    if(str=="Light"||str=="L"){	
		        cout<<"Which product? "<<endl;
		        cin>>optionn;
		        L=this->LIGHT[optionn];
		       	Pa->buy(*I,*L,*We,*F,*A,*P,3);
			}else if (str=="Fire"||str=="F"){
			    cout<<"Which product? "<<endl;
		        cin>>optionn;
		        F=this->FIRE[optionn];
		        Pa->buy(*I,*L,*We,*F,*A,*P,4);
			}else if(str=="Weapons"||str=="W"){
				cout<<"Which product? "<<endl;
		        cin>>optionn;
				We=this->WEP[optionn];
				Pa->buy(*I,*L,*We,*F,*A,*P,2);
			}else if(str=="Armors"||str=="A"){
				cout<<"Which product? "<<endl;
		        cin>>optionn;
		        A=this->ARM[optionn];
		        Pa->buy(*I,*L,*We,*F,*A,*P,1);
			}else if(str=="Ice"||str=="I"){
				cout<<"Which product? "<<endl;
		        cin>>optionn;
		        I=this->ICE[optionn];
		        Pa->buy(*I,*L,*We,*F,*A,*P,5);
			}else if(str=="Potions"||str=="P"){
				cout<<"Which product? "<<endl;
		        cin>>optionn;
		        P=this->POT[optionn];
		        Pa->buy(*I,*L,*We,*F,*A,*P,6);
			}
			  
		}else if(op==0){
			cout<<"Which category of product you want to Sell?"<<endl;
		    cin>>str;
		    if(str=="Light"||str=="L"){	
		        cout<<"Which product? "<<endl;
		        Pa->checkInventory();
		        cin>>optionn;
		        L=this->LIGHT[optionn];
		       	Pa->sell(*I,*L,*We,*F,*A,*P,3);
			}else if (str=="Fire"||str=="F"){
				Pa->checkInventory();
			    cout<<"Which product? "<<endl;
		        cin>>optionn;
		        F=this->FIRE[optionn];
		        Pa->sell(*I,*L,*We,*F,*A,*P,4);
			}else if(str=="Weapons"||str=="W"){
				Pa->checkInventory();
				cout<<"Which product? "<<endl;
		        cin>>optionn;
				We=this->WEP[optionn];
				Pa->sell(*I,*L,*We,*F,*A,*P,2);
			}else if(str=="Armors"||str=="A"){
				Pa->checkInventory();
				cout<<"Which product? "<<endl;
		        cin>>optionn;
		        A=this->ARM[optionn];
		        Pa->sell(*I,*L,*We,*F,*A,*P,1);
			}else if(str=="Ice"||str=="I"){
				Pa->checkInventory();
				cout<<"Which product? "<<endl;
		        cin>>optionn;
		        I=this->ICE[optionn];
		        Pa->sell(*I,*L,*We,*F,*A,*P,5);
			}else if(str=="Potions"||str=="P"){
				Pa->checkInventory();
				cout<<"Which product? "<<endl;
		        cin>>optionn;
		        P=this->POT[optionn];
		        Pa->sell(*I,*L,*We,*F,*A,*P,6);
			}
		//	 W->checkInventory();
		}	
		}else if(ho==3){
				if(op==1){
		    cout<<"Which category of product you want to buy?"<<endl;
		    cin>>str;
		    if(str=="Light"||str=="L"){	
		        cout<<"Which product? "<<endl;
		        cin>>optionn;
		        L=this->LIGHT[optionn];
		       	S->buy(*I,*L,*We,*F,*A,*P,3);
			}else if (str=="Fire"||str=="F"){
			    cout<<"Which product? "<<endl;
		        cin>>optionn;
		        F=this->FIRE[optionn];
		        S->buy(*I,*L,*We,*F,*A,*P,4);
			}else if(str=="Weapons"||str=="W"){
				cout<<"Which product? "<<endl;
		        cin>>optionn;
				We=this->WEP[optionn];
				S->buy(*I,*L,*We,*F,*A,*P,2);
			}else if(str=="Armors"||str=="A"){
				cout<<"Which product? "<<endl;
		        cin>>optionn;
		        A=this->ARM[optionn];
		        S->buy(*I,*L,*We,*F,*A,*P,1);
			}else if(str=="Ice"||str=="I"){
				cout<<"Which product? "<<endl;
		        cin>>optionn;
		        I=this->ICE[optionn];
		        S->buy(*I,*L,*We,*F,*A,*P,5);
			}else if(str=="Potions"||str=="P"){
				cout<<"Which product? "<<endl;
		        cin>>optionn;
		        P=this->POT[optionn];
		        S->buy(*I,*L,*We,*F,*A,*P,6);
			}
			  
		}else if(op==0){
			cout<<"Which category of product you want to Sell?"<<endl;
		    cin>>str;
		    if(str=="Light"||str=="L"){	
		        cout<<"Which product? "<<endl;
		        S->checkInventory();
		        cin>>optionn;
		        L=this->LIGHT[optionn];
		       	S->sell(*I,*L,*We,*F,*A,*P,3);
			}else if (str=="Fire"||str=="F"){
				S->checkInventory();
			    cout<<"Which product? "<<endl;
		        cin>>optionn;
		        F=this->FIRE[optionn];
		        S->sell(*I,*L,*We,*F,*A,*P,4);
			}else if(str=="Weapons"||str=="W"){
				S->checkInventory();
				cout<<"Which product? "<<endl;
		        cin>>optionn;
				We=this->WEP[optionn];
				S->sell(*I,*L,*We,*F,*A,*P,2);
			}else if(str=="Armors"||str=="A"){
				S->checkInventory();
				cout<<"Which product? "<<endl;
		        cin>>optionn;
		        A=this->ARM[optionn];
		        S->sell(*I,*L,*We,*F,*A,*P,1);
			}else if(str=="Ice"||str=="I"){
				S->checkInventory();
				cout<<"Which product? "<<endl;
		        cin>>optionn;
		        I=this->ICE[optionn];
		        S->sell(*I,*L,*We,*F,*A,*P,5);
			}else if(str=="Potions"||str=="P"){
				S->checkInventory();
				cout<<"Which product? "<<endl;
		        cin>>optionn;
		        P=this->POT[optionn];
		        S->sell(*I,*L,*We,*F,*A,*P,6);
			}
		//	 W->checkInventory();
		}
		}
}
}
