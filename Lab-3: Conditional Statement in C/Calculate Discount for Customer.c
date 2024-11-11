//write a program to calculate Discount for customer
#include <stdio.h>

int main()
{
    char customerType;
    float purchaseAmount, discount, finalAmount;

    printf("Enter R for Regular and N for New Customer: ");
    scanf(" %c", &customerType);

    if (customerType == 'R' || customerType == 'r')
    {
        printf("Enter the purchase amount: $");
        scanf("%f", &purchaseAmount);
        if (purchaseAmount >= 500 && purchaseAmount <= 1000)
        {
            discount = 0.07;
        }
        else if (purchaseAmount >= 1002 && purchaseAmount <= 2000)
        {
            discount = 0.10;
        }
        else
        {
            discount = 0.13;
        }
    }
    else if(customerType == 'N' || customerType == 'n')
    {
        printf("Enter the purchase amount: $");
        scanf("%f", &purchaseAmount);
        if (purchaseAmount >= 500 && purchaseAmount <= 1000)
        {
            discount = 0.05;
        }
        else if (purchaseAmount >= 1002 && purchaseAmount <= 2000)
        {
            discount = 0.07;
        }
        else
        {
            discount = 0.10;
        }
    }
    else
    {
        printf("Invalid Customer");
        return 1;
    }

    finalAmount = purchaseAmount - (purchaseAmount * discount);

    printf("Discount: %.2f%%\n", discount * 100);
    printf("Final Amount: $%.2f\n", finalAmount);

    return 0;
}
