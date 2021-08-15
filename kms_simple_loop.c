/* 
 * Converts distances from kilometers to miles
 * or miles to kilometers
 */

#define _CRT_SECURE_NO_WARNINGS //for Visual Studio compiler
#pragma warning(disable:6031) //ignore scanf warnings

#include<stdio.h>

int main()
{
	//declare variables to store the data
	char again = 'y'; //initialization

    printf("Welcome to the kilometer/ mile calculator. ");

    while (again == 'y')//test

    {
        //calculation

        printf("\nWould you like to do another conversion (y or n");
        scanf(" %c", &again);//update
    }

    int userChoice;

    int i;
    //Initialization
    i = 0;

    while (i < 3)//test
    {
        printf("\nyou selected 1!\n");
        
        //update
        userChoice = 2;
        
    }
	
    
    printf("Welcome to the kilometer/ mile calculator. ");

	while (again == 'y') //test
	{

		printf("\nWould you like to do another conversion? (y or n): ");
		scanf(" %c", &again);
	}
	printf("\nHave a great day!\n");

	return 0;
}
