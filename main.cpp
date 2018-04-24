/******************************************************************************
 * AUTHOR     : Nick Terrazes & Mark Saleh
 * STUDENT ID : 1080548 & 1060488
 * Lab #25a	  : Array Train - set #1
 * CLASS      : CS1A
 * SECTION    : MW-8am
 * DUE DATE   : 4/24/18
 *****************************************************************************/

#include "Lab25a.h"

/******************************************************************************
 * Lab #25a: Array Train - set #1
 * ----------------------------------------------------------------------------
 * This program will
 * ----------------------------------------------------------------------------
 * INPUT:
 *		userChoice :
 *
 * OUTPUT:
 * 		avg		   :
 *
 *
 *****************************************************************************/
int AverageInts(const int NUM_AR[], const int AR_SIZE);
int FirstInstance(const int NUM_AR[], const int AR_SIZE, int search);
int NumberOfInstances(const int AGE_AR[], const int AR_LEN, int searchItem);
int PersonSearch(const string NAMES_AR[], const int AR_LEN, string searchItem);
int FindBiggest(const int NUM_AR[], const int AR_SIZE);
int main()
{
	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 *-------------------------------------------------------------------------
	 *PROGRAMMER[] : Programmer's Name
	 *CLASS[]      : Student's Course
	 *SECTION[]    : Class Days and Times
	 *LAB_NUM      : Lab Number (specific to this Lab / Assignment)
	 *LAB_NAME[]   : Title of the Lab / Assignment
	 *************************************************************************/


	const char PROGRAMMER[] 	  = "Nick Terrazes & Mark Saleh";
	const char CLASS[]     		  = "CS1A";
	const char 	SECTION[]         = "MW-8:00 am";
	const int LAB_NUM            =  25;
	const char LAB_NAME[]         = "Array Train - set #1";
	const int  AR_SIZE		      =  11;
	const string NAME_AR[AR_SIZE] = {"Zac", "Kasra", "Bas", "Sara", "Nick",
									 "Devlin", "Justin", "Abe", "Jeremy",
									 "Farah", "Maryan"};
	const int    AGES_AR[AR_SIZE] = {22, 75, 19, 21, 18, 12, 19, 5, 62, 21, 21};

	// variables
	int userChoice;
	int ageAverage;
	int searchAge1;
	int firstInstance;
	int amtInstances;
	int searchAge2;
	string searchName;
	int person;
	int oldest;
	int youngest;
	int ageSum;


	//initialization


	//OUTPUT the class heading
	cout << left;
	cout << "***********************************************************\n";
	cout << "*  PROGRAMMED BY : " << PROGRAMMER << endl;
	cout << "*  "     << setw(14) << "CLASS"    << ": " << CLASS    << endl;
	cout << "*  "     << setw(14) << "SECTION"  << ": " << SECTION  << endl;
	cout << "*  LAB #"<< setw(9) << LAB_NUM    << ": "<< LAB_NAME << endl;
	cout << "************************************************************\n\n";
	cout << right;

	cout << "HELLO USER!\n";
	cout << "This program allows you to calculate the average of all ages,\n "
			"find the first instance of an age, find the number of instances\n"
			"of an age, search for a person by his/her name, find the oldest\n"
			"person, find the youngest person, and calculate the sum of the\n"
			"ages\n";
	cout << "Please enter '1' to calculate the average of the ages\n";
	cout << "Please enter '2' to find the first instance of an age\n";
	cout << "Please enter '3' to find the number of instances for an age\n";
	cout << "Please enter '4' to search for a person by name\n";
	cout << "Please enter '5' to find the oldest person\n";
	cout << "Please enter '6' to find the youngest person\n";
	cout << "Please enter '7' to calculate the sum of the ages\n";
	cout << "Please enter '-1' to exit the program safely\n";
	cout << endl;
	cout << "Please enter your choice: ";
	cin  >> userChoice;
	cin.ignore(10000, '\n');

	while (userChoice != -1)
	{
		switch(userChoice)
		{
		case 1 :
				ageAverage = AverageInts(AGES_AR, AR_SIZE);
				 break;

		case 2 :
				cout << "What age would you like to search for: ";
				 cin  >> searchAge1;
				 if (searchAge1 == 22 || searchAge1 == 75 || searchAge1 == 19 ||
					 searchAge1 == 21 || searchAge1 == 18 || searchAge1 == 12 ||
					 searchAge1 == 5  || searchAge1 == 62)
				 {
					 firstInstance = FirstInstance(AGES_AR, AR_SIZE,
							 	 	 	 	 	   searchAge1);
					 cout << "Index: " << firstInstance << endl;
					 cout << "Name: "  << NAME_AR[firstInstance] << endl;
					 cout << "Age: "   << AGES_AR[firstInstance] << endl;
				 }
				 else
				 {
					 cout << "Age cannot be found";
				 }
				 break;

		case 3 :
				cout << "What age would you like to search for: ";
				 cin  >> searchAge2;
				 if(searchAge2 == 22 || searchAge2 == 75 || searchAge2 == 19 ||
					 searchAge2 == 21 || searchAge2 == 18 || searchAge2 == 12 ||
					 searchAge2 == 5  || searchAge2 == 62)
				 {
					 amtInstances = NumberOfInstances(AGES_AR, AR_SIZE,
							 	 	 	 	 	 	  searchAge2);
				 }
				 else
				 {
					 cout << "Age cannot be found\n";
				 }
				 break;

		case 4 :

				do
				{
					cout << "Enter a name to search for: ";
					getline(cin, searchName);

					if (searchName != "Zac"    && searchName != "Kasra"  &&
						searchName != "Bas"    && searchName != "Sara"   &&
						searchName != "Nick"   && searchName != "Devlin" &&
						searchName != "Justin" && searchName != "Abe"    &&
						searchName != "Jeremy" && searchName != "Farah"  &&
						searchName != "Maryam")
							{
								cout << "INVALID NAME. Please retry again.";
								cout << endl;
							}

				}while (searchName != "Zac"    && searchName != "Kasra"  &&
						searchName != "Bas"    && searchName != "Sara"   &&
						searchName != "Nick"   && searchName != "Devlin" &&
						searchName != "Justin" && searchName != "Abe"    &&
						searchName != "Jeremy" && searchName != "Farah"  &&
						searchName != "Maryam");

				person = PersonSearch(NAME_AR, AR_SIZE, searchName);

				cout << "Index: " << person     	 << endl;
				cout << "Name: "  << NAME_AR[person] << endl;
				cout << "Age: "   << AGES_AR[person] << endl << endl;
				break;

		case 5 :
				oldest = FindBiggest(AGES_AR, AR_SIZE);
				cout << "The oldest is" << endl;
				cout << "Name: "  << NAME_AR[oldest] << endl;
				cout << "Index: " << oldest         << endl;
				cout << "Age: "   << AGES_AR[oldest]   << endl << endl;
				break;

		case 6 :
				youngest = FindSmallest(AGES_AR, AR_SIZE);
				cout << "The oldest is" << endl;
				cout << "Name: "  << NAME_AR[oldest] << endl;
				cout << "Index: " << oldest         << endl;
				cout << "Age: "   << AGES_AR[oldest]   << endl << endl;
				break;

		case 7 :
				ageSum = SumInts(AGES_AR, AR_SIZE);
				cout << "The sum of all ages are: " << ageSum << endl;
				break;

		default :
				 cout << "INVALID CHOICE. Please retry again.";
				break;
		}
		cout << "Please enter your choice: ";
		cin  >> userChoice;
		cin.ignore(10000, '\n');

	}

	return 0;
}
