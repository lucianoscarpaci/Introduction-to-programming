/*
 * Converts distances from kilometers to miles
 * or miles to kilometers
 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

 //function prototypes

//asks and gets the choice (1 kilometers to miles or 2 miles to kilometers)
//invokes the appropriate calculation function
void ConversionFunction();

//asks and gets the kilometers
//returns the miles
double KmsToMiles( );

//asks and gets the miles
//returns the kilometers
double MilesToKms( );

int main()
{
	//declare variables to store the data
	char again = 'y';

	printf("Welcome to the kilometer/ mile calculator. ");

	while (again == 'y'|| again == 'Y') //upper or lowercase y
	{
		//function call
		ConversionFunction();
		printf("\nWould you like to do another conversion? (y or n): ");
		scanf(" %c", &again);
	}
	printf("\nHave a great day!\n");

	return 0;
}

//asks and gets the kilometers
//returns the miles
double KmsToMiles()
{
	double kilometers, miles;
	//ask and get distance in kilometers
	printf("\nEnter distance in kilometers>  ");
	scanf("%lf", &kilometers);

	//convert miles to kilometers
	miles = kilometers * 0.62137;
	return miles;
}

//asks and gets the miles
//returns the kilometers
double MilesToKms()
{
	double miles, kilometers;
	//ask and get distance in miles
	printf("\nEnter distance in miles>  ");
	scanf("%lf", &miles);

	//convert miles to kilometers
	kilometers = 1.609 * miles;
	return kilometers;

}

//function definition(implementation)
void ConversionFunction()
{

	//declare variables to store the data
	double miles = 0.0, kilometers = 0.0;
	int userChoice;

	printf("\n---Enter 1 to convert kilometers to miles or ");
	printf("\n---Enter 2 to convert miles to kilometers : ");
	scanf("%d", &userChoice);

	if (userChoice == 1)
	{
                //function call
		miles = KmsToMiles();
		//print the result to the screen
		printf("\nThe kilometers you entered would be %.3f miles\n", miles);
	}
	else if (userChoice == 2)
	{
                //function call
		kilometers = MilesToKms();
		//print the result to the screen
		printf("\nThe miles you entered would be %.3f kilometers\n", kilometers);
	}
	else
	{
		printf("\nYou did not enter a 1 or a 2\n");
	}


}
