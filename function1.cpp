/******************************************************************************
 * AUTHOR     : Nick Terrazes & Mark Saleh
 * STUDENT ID : 1080548 & 1060488
 * Lab #25a	  : Array Train - set #1
 * CLASS      : CS1A
 * SECTION    : MW-8am
 * DUE DATE   : 4/24/18
 *****************************************************************************/
#include "Lab25a.h"

 int AverageInts(const int NUM_AR[], const int AR_SIZE)
 {
	 int sum;
	 int average;
	 int index;

	 sum = 0;

	 for(index = 0; index < AR_SIZE; index++)
	 {
		 sum = sum + NUM_AR[index];
	 }

	 average = sum / AR_SIZE;
	 return average;
 }
