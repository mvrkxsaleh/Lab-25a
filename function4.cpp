/******************************************************************************
 * AUTHOR     : Nick Terrazes & Mark Saleh
 * STUDENT ID : 1080548 & 1060488
 * Lab #25a	  : Array Train - set #1
 * CLASS      : CS1A
 * SECTION    : MW-8am
 * DUE DATE   : 4/24/18
 *****************************************************************************/
#include "Lab25a.h"

int PersonSearch(const string NAMES_AR[], const int AR_LEN, string searchItem)
{
	bool search;
	int index;

	search = false;
	index = 0;

	while(index < AR_LEN && !search)
	{
		if (NAMES_AR[index] == searchItem)
				{
					search = true;
				}
				else
				{
					index++;
				}
	}
		return index;
}

