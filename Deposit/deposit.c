balance = 0.0; //stores account balance 
int account_created =0; //flag to check if an account exists

void createAccount(){
    if (!account_created){
        balance = 0.0;
        account_created = 1;
        printf("Account created successfully!\n");
    }
    else{
    printf("account already exists\n");}
}
//function to deposit money
void deposit(amount){
    if (!account_created){
    printf("Error: no account fund.please create account\n");
    return;
}
if (amount>=100){
    balance += amount;
    printf("deposit successful! your baance is:%.2f\n");
}
  else{
    printf("deposit failed! minimum deposit amount is 100.\n");
  }
}

//main function
int main(){
int choice;
 double amount;
 while (1)
 {
   printf("\nMenu:\n");
   printf("1. create account\n");
   printf("2. deposit money\n");
   printf("3. exit\n");
   printf("enter your choice: ");
   scanf("%d",&choice);

   switch (choice)
   {
   case 1:
        createAccount();
    break;
   case 2:
   printf("enter amount todeposit: ");
   scanf("%If", &amount);
   deposit(amount);
   break;
   case 3:
   printf("thank you for using our banking \n");
   return 0;
   default:
   printf("invalid choice! try again.\n");
   }
 }
 
    return 0;
}