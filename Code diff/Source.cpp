#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "blocks.h"
#include "compare.h"

using namespace std;


int main()
{
	string str1, str2, buff1, buff2;
	string *index1;
	string *index2;
	int numberofblocks;
	
	int len1, len2;

	ifstream file1;
	file1.open("file1.txt");
	ifstream file2;
	file2.open("file2.txt");

	getline(file1, str1, '\0');
	getline(file2, str2,'\0');
	
	index1 = &str1;
	index2 = &str2;

	len1 = str1.size();
	len2 = str2.length();
	if (len1 < len2)
	{
		numberofblocks=compare(str1, str2, len1, len2);
	}
	if (len2 < len1)
	{
		numberofblocks=compare(str2, str1, len2, len1);
	}
	if (len1 == len2)
	{
		cout << "strings are indentical" << endl;
		return 0;
	}
	


	cout << numberofblocks << endl;
	
	
	


	
	


	return 0;
}
