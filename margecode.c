
#include <stdio.h>


#include<stdio.h>

void withdraw(){

//withdraw

float balance;
float withdrawamount;

printf("current balance=%.2f\n", balance);
printf("enter amount to withdraw:- ");
scanf("%f", &withdrawamount ); 
if(withdrawamount == 500|| withdrawamount == 1000 ||withdrawamount == 1500 || withdrawamount == 2000 ){
if(balance >= withdrawamount){
    balance = balance - withdrawamount;
    printf("withdraw successfully! new balance= %.2f\n", balance);
}

}
  else{
    printf("insufficient balance:\n");
  }  

}



int main()
{
    long long accountNumber;
    char accountName[50];
    float initialDeposit;

    printf("Enter your account number: ");
    scanf("%lld", &accountNumber);

    if (accountNumber < 10000000000 || accountNumber > 99999999999)
    {
        printf("Account number must be exactly 11 digits!\n");

        return;

    }

    printf("Enter your name: ");
    scanf("%s",&accountName);

    printf("Enter initial deposit: ");
    scanf("%f", &initialDeposit);

    if (initialDeposit < 500)
    {
        printf("Initial deposit must be at least 500!\n");
        return;
    }

    printf("Account created successfully!\n");

    printf("Account number: %lld\n", accountNumber);
    printf("Account name: %s\n", accountName);
    printf("Initial deposit: %f\n", initialDeposit);

    withdraw();
    
    return 0;
}
