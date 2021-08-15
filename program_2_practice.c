#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    //declare variables to store the data
    char initial, lowerCaseInitial;
    int lowerNum;
    printf("Hello User");
    printf("Enter an initial");
    scanf(" %c", &initial);

    //Change initial to lowercase
    lowerCaseInitial = tolower(initial);

    //Find the numerical ASCII value and print to the screen
    lowerNum = (int)lowerCaseInitial;
    //print the results to the screen
    printf("")


    