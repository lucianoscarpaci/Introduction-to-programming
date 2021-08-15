/* Luciano Scarpaci  January 5th 2021
*
* This program converts kilometers to miles or miles to kilometers
*/

#include<stdio.h>

int main()
{
    //declare the variables to store the data
    double miles, kilometers;
    int userChoice;

    //print the results to the screen
    printf("\n%.2f miles is %.2f kilometers\n", miles, kilometers);

    printf("Welcome to the kilometer/ mile calculator. ")
    printf("\n---Enter 1 to convert kilometers to miles or ");
    printf("\n---Enter 2 to convert miles to kilometers : ");
    scanf("%d", userChoice);

    if (userChoice == 1)
    {
        //ask and get distance in kilometers
        printf("\nEnter distance in kilometers> ");
        scanf("%lf", &kilometers);

        //convert kilometers to miles
        kilometers = 1.609 * miles;
    }
    else if (userChoice == 2)
    {
        //ask and get distance in miles
        printf("\nEnter distance in miles>  ");
        scanf("%lf", &miles);

        //convert mil
    }
    else
    {
        printf("\nYou did not enter a 1 or a 2\n");
    }

    //print the results to the screen
    printf("\n%.2f miles is %.2f kilometers\n", miles, kilometers);

    return 0;
}