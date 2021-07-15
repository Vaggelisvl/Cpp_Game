#ifndef LIVING_H
#define LIVING_H
using namespace std;
#include<iostream>
class Living{
	public:
		Living(string nam,int lv,int health);
//		int get_health(){
//			return this->healthPower;
//		}
	//	virtual
	void setHealth(int i);
	void displayStats();
	bool chechAlive();
	int retHealth();
	protected:
		string name;
		int level;
		int healthPower;
		bool isAlive;
};

#endif
