/******************************************************************************
 * AUTHOR     : Nick Terrazes & Mark Saleh
 * STUDENT ID : 1080548 & 1060488
 * Lab #25a	  : Array Train - set #1
 * CLASS      : CS1A
 * SECTION    : MW-8am
 * DUE DATE   : 4/24/18
 *****************************************************************************/
#include "Lab25a.h"

int NumberOfInstances(const int AGE_AR[], const int AR_LEN, int searchItem)
{
	int index;
	int instances;

	instances = 0;
	for(index = 1; index < AR_LEN; index++)
			{

				if(AGE_AR[index] == searchItem)
					{
						instances++;
					}
			}

			if(instances > 1)
			{
				cout << "There are " << instances << " instances of the age "
					 << searchItem << '.';
			}
			else if(instances == 1)
			{
				cout << "There is one instance of the age "
					 << searchItem << '.';
			}
			else
			{
				cout << searchItem << "this age does not exist in this list.";
			}

			cout << endl << endl;

	return instances;
}
