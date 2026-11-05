#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice, agent_bal, float_bal, amount    ;

    printf("Enter Agent Cash Balance: \n");
    scanf("%d", &agent_bal);

    printf("Enter Float Balance: \n");
    scanf("%d", &float_bal);

    while (1)
    {
        printf("====== Mobile Money Agent Simulator ======\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("0. Exit\n");

        printf("Enter Choice: \n");
        scanf("%d", &choice);


        switch (choice)
        {
            case 1:
                if (amount <= 0)

            {
                printf("Invalid Attempt\n");

            }
            else if (amount > 0)
            {
                float_bal -= amount;
                agent_bal += amount + 500;

                printf("Current Float Balance is %d\n", float_bal);
                printf("Current Agent Balance is %d\n\n", agent_bal);
            }

            break;

            case 2:
                if (amount <= 0)
            {
                printf("Invalid Attempt\n");
            }
            else if (amount > 0)
            {
                float_bal += amount;
                agent_bal -= amount - 500;

                printf("Current Float Balance is %d\n", float_bal);
                printf("Current Agent Balance is %d\n\n", agent_bal);
            }
            else if (amount > agent_bal)
            {
                printf("Low Cash at Hand\n");
            }
            else if(agent_bal < 0)
            {
                printf("Low Cash at hand\n");
            }
            break;

            case 0:
                    printf("Thank You\n");

                return 0;
        }
    }
    return 0;
}
