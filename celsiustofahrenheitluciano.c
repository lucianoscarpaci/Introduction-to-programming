/* Luciano Scarpaci January 5th 2021
 *
 * This program converts celsius to fahrenheit
 */

//input and output
#include <stdio.h>

int main()
{
    //declare variables to store the data
    double celsius, fahrenheit;

    //ask to enter temperature in celsius
    printf("Enter temperature in celsius > ");
    scanf("%lf", &celsius);

    //convert celsius to fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    //print the results to the screen
    printf("\n%.2f celsius equals %.2f fahrenheit\n", celsius, fahrenheit);

    return 0;
}



