#ifndef ITEM_H
#define ITEM_H
#include <string>
using namespace std;
class Item{
	public:
		Item(string nam,int vl,int level);
		Item();
		string getName();
		int getValue();
		int getMin_Level();
		string setName(string n);
		int setValue(int v);
		int setMin_Level(int ml);
		bool check_use();
		void set_usage_ON();
		void set_usage_OFF();
	protected:
		string name;
		int value;
		int min_level;
		bool IsInUse;
};
#endif

