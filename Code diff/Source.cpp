#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <string.h>
#include "blocks.h"
#include "compare.h"

using namespace std;


int main()
{
	string str1, str2, buff1, buff2, word, stringtoinsert;
	char c;

	int wordcounter;
	int numberofblocks;
	Blocks X[10];
	int blockselection;
	int len1, len2;
	
	ifstream file1;
	file1.open("file1.txt");
	ifstream file2;
	file2.open("file2.txt");
	
	getline(file1, str1, '\0');
	getline(file2, str2,'\0');
	
	len1 = str1.size();
	len2 = str2.length();
	if (len1 < len2)
	{
		numberofblocks=compare(str1, str2, len1, len2,X);
	}
	if (len1 == len2)
	{
		cout << "strings are indentical" << endl;
		return 0;
	}
	for (int counterforblocks = 0; counterforblocks <= numberofblocks-1; counterforblocks++)
	{
		X[counterforblocks].createblock(str2);
	}
	for (int counter = 1, blockid=0; blockid <= numberofblocks-1;blockid++, counter++)
	{
		cout << counter << "='";
		X[blockid].print();
		cout <<"'" <<endl;
	}
	
	cout << "would you like to modify the first file ? (Y/N)" << endl;
	//cin >> c;
	c = 89; // <<<<
	if (c == 89 || c == 121)
	{
		blockselection = 1;
		cout << "which block would you like to add" << endl;;
		//cin >> blockselection;
		cout << "write the word after which you would like to place it" << endl;;
		//cin >> word;
		cout << "if the word appears in the file once type in '1' if it appears several times then type in after which reappearance of the word you would like to put your block in" << endl;
		//cin >> wordcounter;
		//stringtoinsert = X[blockselection - 1].str;

	}
	cout << str1;
	cout << endl << stringtoinsert << endl;
	return 0;
}
