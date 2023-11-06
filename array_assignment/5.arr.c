/*Create a structure to specify data of customers in a bank. 
The data to be stored is: Account number, Name, Balance in account. 
Assume maximum of 200 customers in the bank.(done)

(1) Write a function to print the Account number 
and name of each customer with balance below Rs. 100.(done)

(2) If a customer requests for withdrawal or deposit, the form contains the fields:
Account number, amount, code (1 for deposit, 0 for withdrawal) 

Write a program to give a message, 
“The balance is insufficient for the specified withdrawal”, 
if on withdrawal the balance falls below Rs. 100.*/
#include<stdio.h>
#include<stdlib.h>

struct Customer
{
    int accno;
    char name[65];
    float balance;
}customer[200];
int n = 0;//global variable

static inline int MainMenu();
void CreateNew();
void ShowCustomerWithInsufficientBalance();
void TransactionManager();
static inline void Deposit(int index, float amount);
static inline void Withdraw(int index, float amount);



int main()
{ 
    int choice;
    do
    {
        
        switch(MainMenu())
        {
            case 1:
                CreateNew();
                break;
            case 2:
                TransactionManager();
                break;
            case 3:
                ShowCustomerWithInsufficientBalance();
                break;
            case 4: 
                exit(0);
            default:
                printf("Invalid response!\n");
        }
        
    }while(choice != 4);

    return 0;
}




void CreateNew()
{
    char has_minimum;
    char choice;
    printf("Create new account...\n");
    printf("Enter account number: ");
    scanf("%d%*c", &customer[n].accno);
    printf("Enter your name: ");
    fgets(customer[n].name,65,stdin);
    customer[n].balance = 0;
    printf("Your balance is %f\n",customer[n].balance);
    n++;//value of n will increase every time CreateNew is called()

}

void ShowCustomerWithInsufficientBalance()
{
    _Bool has_low_balance = 0;
    printf("Showing customers with insufficient balance...\n");
    for (int i = 0; i<n;i++)
    {
        if(customer[i].balance < 100)
        {
            has_low_balance = 1;
            printf("%d: %d  %s",i+1,customer[i].accno,customer[i].name);
        }
    }
    if (!has_low_balance)
        printf("No accounts with balance less than Rs. 100\n");
}

void TransactionManager()
{
    int accno,code;
    _Bool account_exists = 0;
    
    float amt;
    printf("Transaction Menu\n");
    printf("Enter account number: ");
    scanf("%d",&accno);
    for (int i = 0; i< n;i++)
    {
        if(customer[i].accno==accno)
        {
            account_exists = 1;
            printf("%s, your balance is %f\n",customer[i].name,customer[i].balance);
            printf("Select the following options\n1.Deposit\n2.Withdrawal\nEnter your choice: ");
            scanf("%d",&code);
            printf("Enter amount: ");
            scanf("%f",&amt);
            switch (code)
            {
            case 1:
                Deposit(i,amt);
                break;
            case 2:
                Withdraw(i,amt);
                break;
            case 3:
                break;
            
            default:
                printf("Invalid response\n");
                break;
            }
  
        }

    }
    if(!account_exists)
    printf("User does not exist\n");
}

static inline void Deposit(int index, float amount)
{
    customer[index].balance += amount;
    printf("%f has been debited, your total balance is %f\n",amount,customer[index].balance);
}

static inline void Withdraw(int index, float amount)
{
    if (customer[index].balance < 100)
    {
        printf("Withdrawal is unavailable for accounts having less than minimum balance\n");
    }
    else if((customer[index].balance - amount) < 100)
    {
        printf("The balance is insufficient for the specified withdrawal\n");        
    }
    else
    {
        customer[index].balance -= amount;
        printf("%f has been debited, your total balance is %f\n",amount,customer[index].balance);
    }
   
}


static inline int MainMenu()
{
    int choice;
    printf("\nWelcome to ITL Bank\n1.Create New Account\n2.Perform Transaction\n3.Show Accounts having less than minimum balance\n4.Exit\nEnter Your choice: ");
    scanf("%d",&choice);
    return choice;
}