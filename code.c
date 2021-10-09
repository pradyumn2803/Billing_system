#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int choice, quantity;
    char order[1000], a[1000];
    char c, e;
    int amount = 0, i = 0, j = 0;
    int price[1000] = {77, 100, 43, 35, 64, 125, 151, 91, 118, 184, 27, 47, 25, 100, 50, 59, 45, 350, 370, 530, 395, 460, 430, 620, 150, 145, 96, 81, 54, 94, 579, 565, 165, 206, 193, 198, 849, 184, 165, 75, 165, 126, 210, 280, 210, 189, 199, 350, 478, 440, 215, 207, 309, 139, 248, 204, 195, 253, 175, 90, 175, 329, 175, 199};
    int Quantity[1000] = {100, 100, 100, 150, 150, 100, 100, 100, 100, 100, 50, 50, 50, 50, 50, 10, 10, 10, 10, 5, 5, 10, 10, 10, 5, 1000,
                          5, 5, 5, 5, 30, 30, 30, 30, 30, 30, 30, 30, 30, 10, 10, 300, 500, 500, 100, 100, 100, 100, 100, 100, 100, 100,
                          100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    char q;
    printf("1.MENU\n2.ORDER\n3.PAY_BILL\n4.EXIT\n");
    printf("Enter choice : ");
    scanf("%d", &choice);
    FILE *ptr = NULL;
    FILE *p = NULL;
    while (choice < 4)
    {
        switch (choice)
        {
        case 1:
            ptr = fopen("DATABASE.txt", "r");
            while (1)
            {
                c = fgetc(ptr);
                if (c == EOF)
                {
                    break;
                }
                printf("%c", c);
            }
            printf("\n");
            fclose(ptr);
            break;
        case 2:
            while (1)
            {
                fflush(stdin);
            label:
                printf("What would you like to order: ");
                scanf("%[^\n]%*c", order);
                p = fopen("ITEM.txt", "r");
                e = tolower(fgetc(p));
                int k = 0;
                while (1)
                {
                    if (e == EOF)
                    {
                        printf("couldn't find \n");
                        goto label;
                    }
                    while (e != '\n')
                    {
                        a[k++] = e;
                        e = tolower(fgetc(p));
                    }
                    i++;
                    k = 0;
                    if (strcmp(a, order) == 0)
                    {
                        break;
                    }
                    e = tolower(fgetc(p));
                }
                fclose(p);
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
        scanf("%d", &choice);
    }
    printf("Thank You For visiting our market....Have a nice day");
    return 0;
}
