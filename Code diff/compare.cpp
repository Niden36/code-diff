#include <iostream>
#include <string.h>
#include <cstring>
#include <stdio.h>
#include "blocks.h"
#include "clearbuffs.h"
#include "stringenlarge.h"
using namespace std;

int compare(string m, string n, int j, int k, Blocks a[])
{
    string buff1, buff2;
	clearbuffs(buff1, buff2);
	int counter1=0; // counting for string 1
	int counter2 = 0; // counting for string 2, string 2 will always be the longer one
	int startcounter, endcounter;
	int buffcounter; // counting for seperate words
	int loopcounter;
	int numberofblocks=0;
	while (counter2 <= k) 
	{
		buffcounter = 0;
		startcounter = counter2;
		
		for (loopcounter = 0; counter2 <= k && buffcounter <= k; buffcounter++)
		{
			if (loopcounter == 0)
			{
				stringsenlarge(buff1, buff2);
			}
			buff1[buffcounter] = m[counter1];
			buff2[buffcounter] = n[counter2];
			loopcounter++;
			if (m[counter1] != ' '&& m[counter1]!= '\0')
			{ 
				stringenlarge(buff1);
				counter1++;
			}
			if (n[counter2] != ' ')
			{
				stringenlarge(buff2);
				counter2++;
			}

			if ((m[counter1] == ' ' || m[counter1]=='\0') && n[counter2]==' ')
			{
				
				while (buff1 != buff2 && counter2<=k)
				{
					counter2++;
					clearbuff(buff2);

					for (loopcounter = 0, buffcounter=0; counter2 <= k && buffcounter <= j; buffcounter++)
					{
						
						if (n[counter2] == ' ' || n[counter2]=='\0')
						{
							stringenlarge(buff2);
							break;
						}
						stringenlarge(buff2);
						buff2[buffcounter] = n[counter2];
						loopcounter++;
						counter2++;
					}
					if (buff1 == buff2)
					{
						endcounter = counter2-loopcounter-2;
						Blocks blockname(startcounter, endcounter);
						a[numberofblocks].start = startcounter;
						a[numberofblocks].end = endcounter;
						numberofblocks++;
						

					}



				}

				if (buff1 == buff2)
				{
					clearbuffs(buff1, buff2);
					counter1++;
					counter2++;
					break;
				}
			}

		}




	}
	return numberofblocks;
}