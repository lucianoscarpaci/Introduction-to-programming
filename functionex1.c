/*
 * Add name date and description here
 * Example of a program using Library (stdlib, stdio) and Programmer defined functions
 */

#define _CRT_SECURE_NO_WARNINGS //for Visual Studio compiler
#pragma warning(disable:6031) //ignore scanf warnings

#include<stdio.h> //for input and output
#include<stdlib.h> //for absolute value



//calculates and returns the quotient of
//argument one divided by argument 2
//does not allow division by 0, the function will return 0.0 if the denominator has a 0 value
double FindQuo(double arg1, double arg2);

//calculates and returns the absolute value
//of the difference of 2 integers
int FindAbsoluteValue(int arg1, int arg2);


int main()
{
	int num1, num2, absResMain;
	double num3, num4, quotientMain;
	//Greet the user by calling the Greeting function
	Greeting(); 

	//invoke or call the GetInteger function twice to get 2 integers
	num1 = GetInteger();
	num2 = GetInteger();

	//invoke or call the function to do the absolute value calculation
	absResMain = FindAbsoluteValue(num1, num2);

	//invoke or call the GetDouble function twice to get 2 doubles
	num3 = GetDouble();
	num4 = GetDouble();

	//invoke or call the function to do the quotient calculation
	quotientMain = FindQuo(num3, num4);

	//print the results
	printf("\nThe absolute value of %d minus %d is %d\n\n", num1, num2, absResMain);
	printf("\n%.2f divided by %.2f is %.2f\n\n", num3, num4, quotientMain);

	//Say goodbye to the user
	printf("\nGoodbye, Have a great day!\n");

	return 0;
}

//greet the user
void Greeting()
{
	printf("\nWelcome to the absolute value and quotient calculator\n");
}

//ask, get, and return an integer
int GetInteger()
{
	int num;
	printf("\nEnter an integer: ");
	scanf("%d", &num);
	return num;
}

//ask, get, and return a double
double GetDouble()
{
	double num2;
	printf("\nEnter a double: ");
	scanf("%lf", &num2);
	return num2;
}

//calculates and returns the quotient of
//argument one divided by argument 2
//does not allow division by 0, the function will return 0.0 if the denominator has a 0 value
double FindQuo(double arg1, double arg2)
{
	if (arg2 == 0)
	{
		printf("\ncannot divide by zero\n");
		return 0.0;
	}
	else
	{
		return arg1 / arg2;
	}
}

//calculates and returns the absolute value
//of the difference of 2 integers
int FindAbsoluteValue(int arg1, int arg2)
{
	int absResult;
	absResult = abs(arg1 - arg2);
	return absResult;
}