#include "stdio.h"
#include <iostream>
#include <string>
#include "blocks.h"
#include "stringenlarge.h"
using namespace std;


Blocks::Blocks()
{
}

Blocks::Blocks(int i=0, int j=0)
{
	start = i;
	end = j;
}
void Blocks::getstring(string &s)
{


}
void Blocks::createblock(string n)
{
	int j = this->start;
	int k = this->end;
	diff   =   end-start;
	stringenlarge(str, diff+1);
	for (int c=0; j <= k; j++,c++)
	{
		str[c] = n[j];
	}
}
void Blocks::print()
{
	int dif;
	dif = end - start;
	for (int c = 0; c <= dif; c++)
	{
		cout << this->str[c];
	}
 }




