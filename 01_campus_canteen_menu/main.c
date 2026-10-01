#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice, quantity;
    float discount=0, total = 0;
    float running_bill, price;

    while (1)
    {
    printf("======= Campus Canteen Menu =======\n");
    printf("1. Beans\n");
    printf("2. G.Nuts\n");
    printf("3. Meat\n");
    printf("4. Peas\n");
    printf("0. Total\n");

    printf("Enter choice here: \n");
    scanf("%d", &choice);


    switch (choice)
    {
        case 1: printf("Enter Quantity here: \n");
        scanf("%d", &quantity);
        price = 5000;
        running_bill = price * quantity;
        printf("The running bill is %.2f\n", running_bill);
        break;

        case 2: printf("Enter Quantity here: \n");
        scanf("%d", &quantity);
        price = 4000;
        running_bill = price * quantity;
        printf("The running bill is %.2f\n", running_bill);
        break;

        case 3: printf("Enter Quantity here: \n");
        scanf("%d", &quantity);
        price = 6000;
        running_bill = price * quantity;
        printf("The running bill is %.2f\n", running_bill);
        break;

        case 4: printf("Enter Quantity here: \n");
        scanf("%d", &quantity);
        price = 3000;
        running_bill = price * quantity;
        printf("The running bill is %.2f\n", running_bill);
        break;

        case 0:printf("The total is %.2f\n", total);
        if (total > 10000)

        {
            discount = 10/100.0* total;
            printf("Offered a discount of %.2f\n",discount);
        }
            printf("The total amount is %.2f", total - discount);
        return 0;

        default: printf("Invalid Input Choice\n\n");
        continue;

    }

        total += running_bill;

    }
    return 0;
}
