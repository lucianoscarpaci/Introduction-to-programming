/* Luciano Scarpaci  January 5th 2021
 *
 * This program converts fahrenheit to celsius
*/

#include<stdio.h>

int main()
{
    //declare variables to store the data
    double celsius, fahrenheit;

    //ask to enter temperature in fahrenheit
    printf("Enter temperature in fahrenheit>  ");
    scanf("%lf", &fahrenheit);

    //convert fahrenheit to celsius
    celsius = (fahrenheit - 32) * 5/9;

    //print the result to the screen
    printf("\n%.2f fahrenheit equals %.2f celsius\n", fahrenheit, celsius);

    return 0;
}