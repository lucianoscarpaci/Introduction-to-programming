/*
 * Tami Sorgente program 2 - January 4, 2021
 * an interactive program using characters, integers, doubles, 
 * simple calculations, and basic conditions  in C.
 */

#define _CRT_SECURE_NO_WARNINGS //for Visual Studio compiler
#pragma warning(disable:6031) //ignore scanf warnings

#include<stdio.h> //for input and output
#include<ctype.h> //to change letters to upper and lowercase
#include<math.h> //for absolute value

int main()
{
	//declare variables to store the data
	char initial, lowerCaseInitial;
	int  lowerNum;
	int num1, num2, absResult;
	double num3, num4, powResult;
	//Greet the user
	printf("\nWelcome!");

	//Ask the user to enter their first initial
	printf("\nPlease enter your first initial: ");

	//Get the initial from the user
	scanf(" %c", &initial);

		//Change the initial to lowercase
	lowerCaseInitial = tolower(initial);

	//Find the numerical ASCII value of the lowercase letter
	lowerNum = (int)lowerCaseInitial;

	printf("\nThe numerical value of '%c' is %d\n", lowerCaseInitial, lowerNum);
	//Test the numerical value of the lowercase version of the initial, if it is less than 110

	if (lowerNum < 110)
	{
		//first half of the alphabet and do some math with 2 integers
		printf("\nFirst half of the alphabet!");
		//Get 2 integers from the user
		printf("\nEnter an integer: ");
		scanf("%d", &num1);
		printf("\nEnter another integer: ");
		scanf("%d", &num2);
		//Calculate the result of the first integer raised to the power of the second integer
		absResult = abs(num1 - num2);
		//Print the result onto the screen
		printf("\nThe absolute value of %d minus %d is %d\n", num1, num2, absResult);
	}
	else
	{

		//second half of the alphabet and do some math with doubles
		printf("\nSecond half of the alphabet!");
		//Get 2 doubles from the user
		printf("\nEnter a double: ");
		scanf("%lf", &num3);
		printf("\nEnter another double: ");
		scanf("%lf", &num4);
		//Calculate the absolute value of the difference
		powResult = pow(num3, num4);
		//Print the result onto the screen
		printf("\n%.2f raised to the %.2f power is %.3f\n", num3, num4, powResult);
	}
	//Say goodbye to the user
	printf("\nGoodbye, Have a great day!\n");

	return 0;
}