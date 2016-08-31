#include <iostream>
#include <string>
#include "stringenlarge.h"
using namespace std;

void stringenlarge(string &j)
{
	int i;
 	i = j.length();
	i++;
	j.resize(i,' ');

}
void stringsenlarge(string &j, string &k)
{
	int i, m;
	i = j.size();
	i++;
	j.resize(i,' ');
	m = k.length();
	m++;
	k.resize(m,' ');
}