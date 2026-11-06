#include <stdio.h>
#include <stdlib.h>

void menu();
float printing(int n);
float photocopying(int n);
float scanning(int n);
int input();
float another(int n);

int main()
{
    int choice;
    int n;
    printf("====== UCU PRINTING CENTER ======\n");
    menu();

    while(1)
    {
        printf("Enter Choice: \n");

        do {
            scanf("%d", &choice);
            if(choice>4 || choice <0)
            {
                printf("Invalid choice. Try again\n");
            }
        }while(choice>4 || choice <0);

        if(choice==0)
        {
            printf("Goodbye\n");
                break;
        }

        switch(choice)
        {
            case 1:
                n = input();
                printf("Total: %f\n", printing(n));
            break;
            case 2:
                n = input();
                printf("Total: %f\n", photocopying(n));
                break;
            case 3:
                n = input();
                printf("Total: %f\n", scanning(n));
                break;
            case 4:
                n = input();
                printf("Total: %f\n", another(n));
                break;
            case 0:
                n = input();
                break;
        }
    }
    return 0;
}

void menu()
{
    printf("1.Printing\n");
    printf("2.Photocoping\n");
    printf("3.Scanning\n");
    printf("4.Another Service\n");
    printf("0.Exit\n");
}
float printing(int n)
{
    float price_printing = 200.0;
    float total;
    if(n<=50)
    {
        total = n*price_printing;
    }
    else
    {
        total = n*price_printing*0.75;

    }

    return total;
}
float photocopying(int n)
{
    float price_photocopying = 100.0;
    float total;
    if(n<=50)
    {
        total = n*price_photocopying;
    }
    else
    {
        total = n*price_photocopying *0.75;

    }
    return total;
}
float scanning(int n)
{
    float price_scanning = 500.0;
    float total;
    if(n<=50)
    {
        total = n*price_scanning;
    }
    else
    {
        total = n*price_scanning*0.75;

    }
    return total;
}
int input(void)
{
    int n;

    printf("Enter the number of pages: \n");
    scanf("%d", &n);

    return n;
}
float another(int n)
{
    float price_another = 250.0;
    float total;

    total = n*price_another;
    return total;
}
