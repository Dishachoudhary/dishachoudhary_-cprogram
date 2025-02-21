#include<stdio.h>

void withdraw(){

//withdraw

float balance;
float withdrawamount;

printf("current balance=%.2f\n", balance);
printf("enter amount to withdraw:- ");
scanf("%f", &withdrawamount );
if(balance >= withdrawamount){
    balance = balance - withdrawamount;
    printf("withdraw successfully! new balance= %.2f\n", balance);
}
  else{
    printf("insufficient balance:\n");
  }  

}
int main(){

withdraw();


}