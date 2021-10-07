#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    int c;
    printf("1.MENU\n2.ORDER\n3.PAY_BILL\n4.EXIT\n");
    printf("Enter choice : ");
    scanf("%d",&c);
    FILE *ptr=NULL;
    while(c<4){
        switch (c)
        {
        case 1:
            ptr=fopen("DATABASE.txt","r");
            while (1)
            {
                char c=fgetc(ptr);
                if(c==EOF){
                    break;
                }
                printf("%c",c);

            }
            
            break;
        case 2:
            
            break;
        case 3:
            /* code */
            break;
        
        default:
            break;
        }
    printf("Enter choice : ");
    scanf("%d",&c);
    }
    return 0;
}