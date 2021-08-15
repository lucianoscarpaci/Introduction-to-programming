#include<stdio.h> //input and output

int main()
{
    //declare variables
    char initial;
    char lastname[25];
    double itemPrice;
    double taxRate = .07;
    double itemTax, total;
    char again = 'y';//loop

    //ask for the initial
    printf("\nEnter your first initial: ");
    //get the initial
    scanf(" %c", &initial);
    //ask for the last name
    printf("\nEnter your last name: ");
    //get the last name
    scanf(" %s", lastname);

    while (again == 'y')//test
    {
        //ask for the price
        printf("\nEnter the item price: ");
        
        //get the price
        scanf("%lf", &itemPrice);
        
        //calculate the tax
        itemTax = itemPrice * taxRate;

        //calculate the total
        total = itemPrice + itemTax;

        //print the results
        printf("\nThe new total is %.2f", total);
        printf("\nHave a nice day %c. %s thanks the tax was %.2f\n\n", initial, lastname, itemTax);
        
        
        printf("would you like to calculate more tax (y or no)?");
        scanf(" %c", &again);//update

    }//end of the while loop
    printf("\nGoodbye!");
    return 0;


}