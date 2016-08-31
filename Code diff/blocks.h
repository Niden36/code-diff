#include "stdio.h"
#include <iostream>
#include <string>

using namespace std;

class Blocks
{
	int start;
	int end;
	string str;
	int diff;
public:
	Blocks();
	Blocks(int i, int j);
	void getstring(string &s);
	void createblock(string n);
	void print();
	friend int compare(string m, string n, int j, int k,Blocks a[]);
	friend int main();
};
