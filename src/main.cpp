#include<iostream>
#include<string>
#include <cstdlib>
#include"Warrior.h"
#include"Weapon.h"
#include"Sorcerer.h"
#include"Paladin.h"
#include"User.h"
#include "Market.h"
#include "Grid.h"
#include"Dragon.h"
#include"Spirit.h"
#include"IceSpell.h"
#include"FireSpell.h"
#include"IceSpell.h"
#include"Potion.h"
#include"Weapon.h"
#include"LightingSpell.h"
#include "Exosceleton.h"
using namespace std;

void monsterAttack(Dragon *D,Exosceleton *E,Spirit *Sp,Sorcerer *S,Warrior *W,Paladin *P){
	int h1,h2,h3,d1,d2,d3,def1;
//	def1=W->ret_Arm_D();
	h1=W->retHealth();
	h2=S->retHealth();
	h3=P->retHealth();
	if(h1!=0){
	
		d1=D->damRet();
		h1-=d1;
		if(h1>=0){
			cout<<"Attacked!"<<endl;
		W->setHealth(h1);}
		else{
			W->setHealth(0);
		}}
	if(h2!=0){
		d2=E->damRet();
		h2-=d2;
		if(h2>=0){
		S->setHealth(h2);}
		else{
			S->setHealth(0);
		}}
	if(h3!=0){
		d3=Sp->damRet();
		h3-=d3;
		if(h3>=0){
		P->setHealth(h3);}
		else{
			P->setHealth(0);
		}
	}}

void afterRound(Dragon &D,Exosceleton &E,Spirit & Sp,Sorcerer &S,Warrior &W,Paladin &P){
	int t1,t2,t3,t4,t5,t6;
	t1=D.retHealth();
	t2=E.retHealth();
	t3=Sp.retHealth();
	t4=S.retHealth();
	t5=W.retHealth();
	t6=P.retHealth();
	if(t1!=0){
		t1+=(t1*0.3);
		D.setHealth(t1);
	}
	if(t2!=0){
		t2+=(t2*0.3);
		E.setHealth(t2);
	}
	if(t3!=0){
		t3+=(t3*0.3);
		Sp.setHealth(t3);
	}
	if(t4!=0){
		t4+=(t4*0.3);
		S.setHealth(t4);
	}else{
		S.setHealth(50);
	}
	if(t5!=0){
		t5+=(t5*0.3);
		W.setHealth(t4);
	}else{
		W.setHealth(50);
	}
	if(t6!=0){
		t4+=(t4*0.3);
		P.setHealth(t4);
	}else{
		P.setHealth(50);
	}
	
	
}
int main(){
	int roundover=0;
	int m1,m2,m3;
	int round=0;
	int pos,optionn;
	User *U=new User();
	int Max_Rounds=2;
	Grid *G=new Grid();
	//Default Heroes
	Sorcerer *S=new Sorcerer("Jason",0,100,10,15,50,200,21,65,32,30,80,2,30);
	Warrior *W=new Warrior("Jeremy",0,100,10,15,20,200,15,10,21,45,57,21,43);
	Paladin *P=new Paladin("IVAN",0,100,10,15,20,200,0,10,10,10,10,10,10);
	//Default Monsters
	Dragon *D=new Dragon("REX",0,100,15,3,10);
	Exosceleton *E=new Exosceleton("Dead",0,100,8,20,5);
	Spirit *SP=new Spirit("Ghost",0,100,10,10,25);
	Market M;
//	W->checkInventory();
//	G->set_Hero(0,1);//All the heroes start at position O and they move TOGETHER
	int cur_pos=0,i=1;
	int op=0;
	int opt1,opt2,opt3;
		
	while(round<Max_Rounds){//U->quitGame()!=0
		//T.move(0);
		
		G->displayMap();
		cout<<string(2,'\n');
		G->move(cur_pos);
		cout<<string(2,'\n');
//		G->displayMap();
//		cout<<string(2,'\n');
		if(G->getMarket_Status()==1){
		M.printMarket();
        M.Market_Menu_And_Transmisions(S,W,P);
		}
		if(W->ret_fight_status()==false){
			W->checkInventory();
		    W->displayStats();
			S->checkInventory();
			S->displayStats();
			P->checkInventory();
			P->displayStats();
		}
//		cur_pos=G->getPossition();
//	    G->move(cur_pos);
	    if(G->getFightStatus()==1){
	    	W->Fight_Status_ON();
	    	S->Fight_Status_ON();
	    	P->Fight_Status_ON();
	    	cout<<"Choose an attack for each Hero or press 1 for each hero for auto attack "<<endl;
	    	cout<<"|Cast spell ->1| USE->2 | attack->3 or 1| "<<endl;
	    	cin>>opt1>>opt2>>opt3;
	    	monsterAttack(D,E,SP,S,W,P);
	    	if(opt1==1){
	    		W->castSpell();
			}else if(opt1==2){
				W->use();
			}else{
				W->attack(*SP,*E,*D);
			}
			if(opt2==1){
	    		S->castSpell();
			}else if(opt2==2){
				S->use();
			}else{
				S->attack(*SP,*E,*D);
			}
	    	if(opt3==1){
	    		P->castSpell();
			}else if(opt3==2){
				P->use();
			}else{
				P->attack(*SP,*E,*D);
			}
			if(W->retHealth()==0&&S->retHealth()==0&&P->retHealth()){
				m1=W->getMoney();
				m1-=(m1/2);
				W->setMoney(m1);
				m2=P->getMoney();
				m2-=(m2/2);
				P->setMoney(m2);
				m3=S->getMoney();
				m3-=(m3/2);
				S->setMoney(m3);
				roundover=1;
			}else if(D->retHealth()==0&SP->retHealth()==0&E->retHealth()==0){
				cout<<"All monster Died!!"<<endl;
				cout<<"Nice!!,You're good "<<endl;
				m1=W->getMoney();
				m1+=(m1/2);
				W->setMoney(m1);
				m2=P->getMoney();
				m2+=(m2/2);
				P->setMoney(m2);
				m3=S->getMoney();
				m3+=(m3/2);
				S->setMoney(m3);
				roundover=1;
			}
		}else{
			int answ;
			cout<<"Do you want to use any potion? |1->YES|2->NO|"<<endl;
			cin>>answ;
			if(answ==1){
				W->use();
				P->use();
				S->use();
			}
		}
		U->quitGame();
//		// uncomment to see the life o heroes after a fight
//		int he=S->retHealth();
//		int he1=W->retHealth();
//		int he2=P->retHealth();
//		cout<<" Sor Health: "<<he<<endl;
//		cout<<" War Health: "<<he1<<endl;
//		cout<<" Pal Health: "<<he2<<endl
      if(roundover==1){
      	roundover=0;
      	W->Fight_Status_OFF();
      	S->Fight_Status_OFF();
      	P->Fight_Status_OFF();
		round++;}
	}
	
	
}
