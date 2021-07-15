#include "User.h"
#include<iostream>
#include<cstdlib>
using namespace std;
User::User(){
	        string na;
	        cout<<"What's your Name?"<<endl;
	        cin>>na;
			cout<<"Welcome "<<na<<"!!"<<endl;
			cout<<"Get Ready To Play"<<endl;
			cout<<"Sit down..Warm up and...ENJOY!!"<<string(2,'\n');
		}
bool User::quitGame(){
	int i;
	cout<<"Do you want to end the game ? |YES->1|NO->0|"<<endl;
	cin >>i;
	if(i==1){
		cout<<"Game over"<<endl;
		exit(0);
	}
}
