/*
 *
 * This program contains the functions for KMS
 * 
 */

#include<stdio.h>

//function prototype

//asks and gets the choice (1 kilometers to miles or 2 miles to kilometers)
void ConversionFunction();

//asks and get the kilometers
//returns the miles
double KmsToMiles( );

//asks and gets the miles
//returns the kilometers
double MilesToKms( );

int main()
{
    //declare the variables to store the data
    char again = 'y';

    printf("Welcome to the kilometer/ mile calculator. ");

    while (again == 'y' || again == 'y') //upper or lowercase y
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
double kmstomiles()
{ 
    double kilometers, miles;
    //ask and get distance in kilometers
    printf("\nEnter distance in kilometers> ");
    scanf("%lf", &kilometers);

    //convert miles to kilometers
    miles = kilometers * 0.62137
    return miles;
}

//asks and gets the miles
//returns the kilometers
double milestokms()
{
    double miles, kilometers;
    //asks and gets distance in miles
    printf("\nEnter distance in miles> ");
    scanf("%lf", &miles);

    //convert miles to kilometers
    kilometers = 1.609 * miles;
    return kilometers;

}

//implementation
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
        //print the results to the screen
        printf("\nThe kilometers you entered would be %.3f miles\n", miles);
    }
    else if (userChoice == 2)
    {
            //function call
        kilometers = MilesToKms();
        //print the results to the screen
        printf("\nThe miles you entered would be %.3f kilometers\n"), kilometers);
    }
    else
    {
        printf("\nYou did not enter a 1 or a 2\n");
    }
    
}

