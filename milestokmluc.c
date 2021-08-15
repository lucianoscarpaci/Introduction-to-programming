/* Luciano Scarpaci  January 5th 2021
*
* This program converts distances miles to kilometers
*/

#include<stdio.h>

int main()
{
    //declare variables to store the data
    double miles, kilometers;

    //ask and get distance in miles
    printf("Enter distance in miles>  ");
    scanf("%lf", &miles);

    //convert miles to kilometers
    kilometers = 1.609 * miles;

    //print the result to the screen
    printf("\n%.2f miles equals %.2f kilometers\n", miles, kilometers);

    return 0;
}