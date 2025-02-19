#include<stdio.h>
#include<string.h>
int created = 0; //flag accoumt is created
char holderName[20]; //account holder name 
accountnumber; //account number 
float balance = 0; //balance 

//function to create account 
void createAccount(){
   printf("\nEnter account holder name: ");
   getchar();
   scanf("%[^\n]s",holderName);
   printf("Enter Account Number: ");
   scanf("%11d",&accountnumber);
   balance =0; // balnce is set to 0
   created = 1;

   printf("\nAccount created successfull! \n");

}

// function to deposit money

void deposit(){
  if (created==0){
    printf("\n no account found! please create account first\n");
    return;
  }
float depositAmount;
printf("Enter deposit amount: ");
scanf("%f", &depositAmount);

// checking deposit condition
if (depositAmount>100){
    balance+= depositAmount;
    printf("Deposit successfull!\n");
    printf("your current balance: %.2f\n", balance);
}else{
    printf("Deposit amout more than 100\n");
}

}
int main(){
  int choice;
  
  while (1)
  {
    printf("\n*****BANK MENU*****\n");
    printf("1. Create Account \n");
    printf("2. Deposit Money\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch (choice) {
    case 1:
         createAccount();
        break;
    case 2:
      deposit();
      break;
      case 3:
      printf("\nthank for using our banking system!\n");
      return 0;
      default:
         printf("\nInvalid choice! try again.\n");
    
    }
  }
  return 0;


}