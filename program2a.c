/*
 * Luciano Scarpaci January 7th 2021 
 * This is programming assignment 2
 *
 */

#define _CRT_SECURE_NO_WARNINGS //for Visual Studio compiler
#pragma warning(disable:6031) //ignore scanf warnings

#include<stdio.h> //for input and output
#include<ctype.h> //to change letters to upper and lowercase
#include<stdlib.h> //for absolute value function
#include<math.h> //for power function

//greet the user
void Greeting();

//ask, get, and return an integer
int GetInteger();

//ask, get, and return a double
double GetDouble();







//greeting the user
void Greeting();
{
    printf("\nHello, User. Welcome to program 2! ");

}
int main()
{
	//declare variables to store the data

	int lowNum, upperNum;
	char initial, lowInitial, upperInitial;

	//Greet the user
    printf("\nHello User, Welcome to program 2!);
    
    //Ask the user to enter their first initial
    printf("\nEnter an initial: ");
	
    //get the first initial
    scanf(" %c", &initial);

	lowInitial = tolower(initial); //Change the initial to lowercase
	lowNum = (int)lowInitial; //get the numerical value (ASCII)

	
	//Test the numerical value of the lowercase version of the initial, if it is less than 110
		//first half of the alphabet and do some math with 2 integers
		//Get 2 integers from the user
		//Calculate the absolute value of the difference
		//Print the result onto the screen
	//else If the lowercase initial is greater than or equal to 110
		//second half of the alphabet and do some math with doubles
		//Get 2 doubles from the user
		//Calculate the result of the first double raised to the power of the second double
		//Print the result onto the screen
	//Say goodbye to the user
		
	return 0;
}