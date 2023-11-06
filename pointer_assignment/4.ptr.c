/*Write a C program that calculates the sum of elements in an integer array
using pointer arithmetic.*/
#include <stdio.h>
int sum_array(int*);
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int sum = sum_array(&arr);
    printf("\nThe sum of elements of the array is %d",sum);

    return 0;

}

int sum_array(int* p)
{
    int sum = 0;

    while(p!=NULL)
    {
        sum += *p;
        p++;
    }

    return sum;
}