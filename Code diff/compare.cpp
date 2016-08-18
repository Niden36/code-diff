#include <iostream>
#include <string.h>
#include <cstring>
#include <stdio.h>
#include "compare.h"
#include "blocks.h"
using namespace std;

int compare(string m, string n, int j,int k)
{
    string buff1, buff2;
	buff1 = "                   ";
	buff2 = "                   ";
	int counter1=0; // counting for string 1
	int counter2 = 0; // counting for string 2, string 2 will always be the longer one
	int startcounter, endcounter;
	int buffcounter; // counting for seperate words
	int loopcounter;
	Blocks a[10];
	int numberofblocks=0;
	while (counter2 <= k) 
	{
		buffcounter = 0;
		startcounter = counter2;
		
		for (loopcounter = 0; counter2 <= k && buffcounter <=k; buffcounter++)
		{
		    

			buff1[buffcounter] = m[counter1];
			buff2[buffcounter] = n[counter2];
			loopcounter++;
			counter1++;
			counter2++;
			if (m[counter1] == ' ')
			{
				counter1++;
				counter2++;
				break;
			}
		}

 		while (buff1!=buff2)
		{
			for (loopcounter = 0; counter2 <= k && buffcounter <= j; buffcounter++)
			{
				 
				if (n[counter2] == ' ')
					break;

				buff2[buffcounter] = n[counter2];
				loopcounter++;
				counter2++;
			}
			if (buff1 == buff2)
			{
				endcounter = counter2;
				Blocks blockname(startcounter, endcounter);
				a[numberofblocks].start = startcounter;
				a[numberofblocks].end = endcounter;
				numberofblocks++;
				
			
			}
			
			cout << " nie dziala ";
		}


	}
	return numberofblocks;
}