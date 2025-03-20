#include <stdio.h>
#include <string.h>
#include "newUser.h"

struct info {
    char name[20];
    char phoneNum[20];
    char address[30];
    char city[20];
    char state[16];
};

void newUser()
{
    int zipCode;
    struct info newCustomer;

    printf("Enter your name: ");
    fgets(newCustomer.name, sizeof(newCustomer.name), stdin);
    newCustomer.name[strcspn(newCustomer.name, "\n")] = '\0';

    printf("Enter your phone number: ");
    fgets(newCustomer.phoneNum, sizeof(newCustomer.phoneNum), stdin);
    newCustomer.phoneNum[strcspn(newCustomer.phoneNum, "\n")] = '\0';

    printf("Enter your address: ");
    fgets(newCustomer.address, sizeof(newCustomer.address), stdin);
    newCustomer.address[strcspn(newCustomer.address, "\n")] = '\0';

    printf("Enter your city: ");
    fgets(newCustomer.city, sizeof(newCustomer.city), stdin);
    newCustomer.city[strcspn(newCustomer.city, "\n")] = '\0';

    printf("Enter your state: ");
    fgets(newCustomer.state, sizeof(newCustomer.state), stdin);
    newCustomer.state[strcspn(newCustomer.state, "\n")] = '\0';

    printf("Enter your zipcode: ");
    scanf("%d", &zipCode);

    FILE *fh_output;
    fh_output = fopen("customers.txt", "a");
    fprintf(fh_output, "%s\n", newCustomer.name);
    fprintf(fh_output, "%s\n", newCustomer.phoneNum);
    fprintf(fh_output, "%s\n", newCustomer.address);
    fprintf(fh_output, "%s\n", newCustomer.city);
    fprintf(fh_output, "%s\n", newCustomer.state);
    fprintf(fh_output, "%d\n\n", zipCode);
    fclose(fh_output);

}
