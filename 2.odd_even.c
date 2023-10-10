#include<stdio.h>

_Bool is_even(int number)
{
    if (number % 2 == 0)
    {
        return 1; //is even
    }

    else 
        return 0;//is odd
}




int main()
{
    int number;

    printf("Enter the number to be checked whether odd or even: ");
    scanf("%d",&number);

    if (is_even(number))
    {
        printf("%d is an even number.\n", number);
    }   

    else
        printf("%d is an odd number.\n", number);

    return 0;
}