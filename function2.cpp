/******************************************************************************
 * AUTHOR     : Nick Terrazes & Mark Saleh
 * STUDENT ID : 1080548 & 1060488
 * Lab #25a	  : Array Train - set #1
 * CLASS      : CS1A
 * SECTION    : MW-8am
 * DUE DATE   : 4/24/18
 *****************************************************************************/
#include "Lab25a.h"

int FirstInstance(const int NUM_AR[], const int AR_SIZE, int search)
{
	int index;
	bool found;

	index = 0;
	found = false;

	while(index < AR_SIZE && !found)
	{
		if (NUM_AR[index] == search)
		{
			found = true;
		}
		else
		{
			index++;
		}
	}
	return index;
}
