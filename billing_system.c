#include <stdio.h>
#include "newUser.h"

int main(void)
{
    int num = 0;
    while (num != 3){
        printf("\nCustomer Billing System\n\n");
        printf("==================================\n\n");
        printf("1:\tto add account on list\n");
        printf("2:\tto search customer account\n");
        printf("3:\tExit\n\n");
        printf("==================================\n\n");
        printf("Select what do you want to do?\n");
        scanf("%d", &num);
        getchar();

        if (num == 1){
            printf("Hello, lets get some basic information.\n");
            newUser();
        }
        else if (num == 2){

        }
        else if (num == 3){
            printf("Thank you, goodbye!\n");
            break;
        }
        else {
            printf("That is an invalid answer\n"); 
        }
    }
    return 0;
}
