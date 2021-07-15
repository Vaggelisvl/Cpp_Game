#ifndef GRID_H
#define GRID_H
#define commom 3
#define nonAccessible -3
#define market 5
#include<iostream>
using namespace std;

class Grid{
	public:
		Grid();
		void set_Monster(int pos,int f);
		void set_Hero(int pos,int f);
		int get_Monster(int pos);
		int get_Hero(int pos);
		void displayMap();
		int getMaxHeores();
		int move(signed int pos);
	int getMarket_Status();
	int getPossition();
	int getFightStatus();
	private:
		int GridA[140];
		int Grid_is_Hero[140];
		int Grid_is_Monster[140];
		int max_Heroes;
		int fight; 
		int Market;
		int position;
};
#endif
