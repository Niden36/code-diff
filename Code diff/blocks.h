#include "stdio.h"
#include <iostream>
#include "compare.h"
using namespace std;

class Blocks
{
	int start;
	int end;
public:
	Blocks();
	Blocks(int i, int j);
	friend int compare(string m, string n, int j, int k);
};
