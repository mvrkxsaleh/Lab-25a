/******************************************************************************
 * AUTHOR     : Nick Terrazes & Mark Saleh
 * STUDENT ID : 1080548 & 1060488
 * Lab #25a	  : Array Train - set #1
 * CLASS      : CS1A
 * SECTION    : MW-8am
 * DUE DATE   : 4/24/18
 *****************************************************************************/

#ifndef LAB25A_H_
#define LAB25A_H_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int AverageInts(const int NUM_AR[], const int AR_SIZE);
int FirstInstance(const int NUM_AR[], const int AR_SIZE, int search);
int NumberOfInstances(const int AGE_AR[], const int AR_LEN, int searchItem);
int PersonSearch(const string NAMES_AR[], const int AR_LEN, string searchItem);
int FindBiggest(const int NUM_AR[], const int AR_SIZE);


#endif /* LAB25A_H_ */
