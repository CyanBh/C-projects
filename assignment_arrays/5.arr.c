/*Create a structure to specify data of customers in a bank. 
The data to be stored is: Account number, Name, Balance in account. 
Assume maximum of 200 customers in the bank.(done)

(1) Write a function to print the Account number 
and name of each customer with balance below Rs. 100.

(2) If a customer requests for withdrawal or deposit, the form contains the fields:
Account number, amount, code (1 for deposit, 0 for withdrawal) 

Write a program to give a message, 
“The balance is insufficient for the specified withdrawal”, 
if on withdrawal the balance falls below Rs. 100.*/
#include<stdio.h>

struct Customer
{
    int accno;
    char name[65];
    float balance;
}customer[200];
int n = 0;//global variable



