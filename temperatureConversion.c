/*
 * Converts temperatures (fahrenheit to celsius) or (celsius to fahrenheit)
 *
 */

 #include<stdio.h> //for input and output

 int main()
 {
     //declare variables to store the data
     double celsius, fahrenheit;
     int userChoice; //display the choices
    
    //print the results to the screen
    
    printf("Welcome to the temperature converter/ calculator.");
    printf("\n---Enter 100 to convert fahrenheit to celsius or ");
    printf("\n---Enter 200 to convert celsius to fahrenheit : ");
    scanf("%d", &userChoice);

    if (userChoice == 100)
    {
        //ask and get temperature in fahrenheit
        printf("\nEnter temperature in fahrenheit> ");
        scanf("%lf", &fahrenheit);

        //convert fahrenheit to celsius
        celsius = (fahrenheit - 32) * 5/9;

        //print the results to the screen
        printf("\n%.2f fahrenheit equals %.2f celsius\n", fahrenheit, celsius);

    }
    else if (userChoice == 200)
    {
    //ask and get temperature in celsius
    printf("Enter temperature in celsius> ");
    scanf("%lf", &celsius);

    //convert celsius to fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    //print the results to the screen
    printf("\n%.2f celsius equals %.2f fahrenheit\n", celsius, fahrenheit);
    }
    else
    {
        printf("\nYou did not enter 100 or 200\n");
    }
    
    return 0;
 }
