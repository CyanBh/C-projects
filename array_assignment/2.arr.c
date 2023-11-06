/*Twenty-five numbers are entered from the keyboard into an array.(done)
Write a program to find out how many of them are positive,
how many are negative, how many are even and how many odd.*/ //(done)

#include <stdio.h>
const int n = 25;
int arr[n];
void TakeInput();
void PositiveNegative();
void OddEven();


int main()
{
    TakeInput();
    PositiveNegative();
    OddEven();
    return 0;

}

void PositiveNegative()
{
    int positive=0,zero=0;
    for(int i = 0; i<n ; i++)
    {
        if (arr[i]==0)
        {
            zero++;
        }
        else if (arr[i]>0)
        {
            positive++;
        }
    }
    printf("There are %d postive numbers, %d negative numbers and %d zeroes in the array\n",positive,(n-positive-zero),zero);
}

void OddEven()
{
    int even = 0;
    for(int i = 0; i< n; i++)
    {
        if (arr[i]%2 == 0)
        {
            even++;
        }
    }
    printf("There are %d odd numbers and %d even numbers\n",(n-even),even);
}



void TakeInput()
{
    printf("Enter %d numbers of your choice...\n",n);
    for(int i=0;i<n;i++)
    {
        printf("%d: ",i+1);
        scanf("%d",&arr[i]);
    }
}