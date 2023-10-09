#include<stdio.h>

_Bool check_prime(int number)
{
    int tally = 0;

    if (number == 0 || number == 1)
    {
        return 0;
    }

    for (int i = 2; i <= (number/2); i++)
    {
        if (((number % i) == 0))
        {
            tally++;
            break;
        }
    }

    if (tally >= 1)
    {
        return 0;
    }

    else 
        return 1;
}

int main()
{
    int num;
    printf("Enter a number to check whether it is prime: ");
    scanf("%d", &num);

    _Bool is_prime;
    
    is_prime = check_prime(num);

    if (is_prime)
    {
        printf("%d is a prime number.\n",num);
    }

    else 
    {
        printf("%d is not a prime number.\n",num);
    }

    return 0;
    
    
}