/******************************************************************************
 * AUTHOR     : Nick Terrazes & Mark Saleh
 * STUDENT ID : 1080548 & 1060488
 * Lab #25a	  : Array Train - set #1
 * CLASS      : CS1A
 * SECTION    : MW-8am
 * DUE DATE   : 4/24/18
 *****************************************************************************/
#include "Lab25a.h"

int FindBiggest(const int NUM_AR[], const int AR_SIZE)
{
	int bigIndex;
	int index;

	bigIndex = 0;

	for (index = 0; index < AR_SIZE; index++)
	{
		if (NUM_AR[index] > NUM_AR[bigIndex])
					{
						bigIndex = index;
					}
				}
	return bigIndex;
}
