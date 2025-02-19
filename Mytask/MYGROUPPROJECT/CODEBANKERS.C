#include <stdio.h>
#include <string.h>
int main()
{
    long long accountNumber;
    char name;
    float user_balance=0.0;

// Function to create a new account

    printf("Enter 11 digit Account Number: ");
    scanf("%lld", &accountNumber);
    printf("Enter Name: ");
    scanf(" %c", &name);

    if(accountNumber==11)
    printf("Account created successfully!\n");
    else
    printf("please enter again\n");
}
