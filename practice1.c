#include<stdio.h>
#include<stdlib.h>

//greet the user
void Greeting();

//ask, get, and return an integer
int GetInteger();

//ask, get, and return a double
double GetDouble();

//calculates and returns the quotient of
//argument one divided by argument two
double FindQuo(double arg1, double arg2);

//calculates and returns the absolute value
//of the difference of two integers
int FindAbsoluteValue(int arg1, int arg2);

int main()
{
    int num1, num2, absResMain;
    double num3, num4, quotientMain;
    //Greet the user by calling the Greeting function
    Greeting();

    //invoke or call the function to do the quotient calculation
    quotientMain = FindQuo(num3, num4);

    //print the results
    printf("\nThe absolute value of %d minus %d is %d\n\n", num1, num2, absResMain);
    printf("\n%.2f divided by %.2f is %.2f\n\n", num3, num4, quotientMain);

    //say goodbye to the user
    printf("\nGoodbye, Have a great day!\n");

    return 0;
    

}

void Greeting()
{
    printf("\nWelcome to the absolute value calc\n");
}