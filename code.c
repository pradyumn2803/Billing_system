#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int c, quantity;
    char order[1000];
    char q;
    printf("1.MENU\n2.ORDER\n3.PAY_BILL\n4.EXIT\n");
    printf("Enter choice : ");
    scanf("%d", &c);
    FILE *ptr = NULL;
    while (c < 4)
    {
        switch (c)
        {
        case 1:
            ptr = fopen("DATABASE.txt", "r");
            while (1)
            {
                char c = fgetc(ptr);
                if (c == EOF)
                {
                    break;
                }
                printf("%c", c);
            }
            printf("\n");
            break;
        case 2:
            while (1)
            {
                fflush(stdin);
                printf("What would you like to order: ");
                scanf("%[^\n]%*c", order);
                fflush(stdin);
                printf("Please Enter the Quantity(in numbers): ");
                scanf("%d", &quantity);
                fflush(stdin);
                printf("Added to your cart\n");
                printf("\n");
                printf("Would you like to place another order?y/n: ");
                scanf("%c", &q);
                if (q == 'n')
                {
                    break;
                }
            }
            printf("\n");
            break;
        case 3:
            printf("\n");
            break;

        default:
            break;
        }
        printf("Enter choice : ");
        scanf("%d", &c);
    }
    printf("Thank You For visiting our market....Have a nice day");
    return 0;
}