#include "stdio.h"
#include <iostream>
#include <string>

using namespace std;

class Blocks
{
	int start;
	int end;
	string str[100];
	int diff = end - start;
public:
	Blocks();
	Blocks(int i, int j);
	void getstring(string &s);
	void createblock(string n);
	void print();
	friend int compare(string m, string n, int j, int k,Blocks a[]);
	friend int main();
};
