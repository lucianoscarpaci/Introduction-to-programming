/* Luciano Scarpaci  January 5th 2021
*
* This program converts distances kilometers to miles
* or miles to kilometers
*/

#include<stdio.h>

int main()
{
    //declare variables to store the data
    double miles, kilometers;
    int userChoice;

    //print results to the screen
    printf("\n%.2f miles is %.2f kilometers\n", miles, kilometers);

    printf("Welcome to kilometer/ mile calcualator. ")
    printf("\n")

    //ask to get distance in kilometers
    printf("Enter distance in kilometers> ");
    scanf("%lf", &kilometers);

    //convert miles to kilometers
    miles = kilometers * 0.62137;

    //print the result to the screen
    printf("\n%.2f miles equals %.2f kilometers\n", miles, kilometers);

    return 0;
}