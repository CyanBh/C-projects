/*Write a C program for swapping Two Values using Pointers.*/
#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter the the value of the numbers to swap, a and b: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping:\na=%d\nb=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping:\na=%d\nb=%d\n",a,b);

    return 0;
}


void swap(int* a, int* b)
{
    int* temp;
    *temp = *a;
    *a = *b;
    *b = *temp;
}

