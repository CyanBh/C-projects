/*Twenty-five numbers are entered from the keyboard into an array.(done)
The number to be searched is entered through the keyboard by the user.(done)
Write a program to find if the number to be searched is present in the array 
and if it is present, display the number of times it appears in the array.*/

#include <stdio.h>
const int n = 25;
int arr[n];

void TakeInput();
void print_array();
void search_number(int);


int main()
{
    int num;//to search   
    TakeInput();
    //print_array();
    printf("Enter the number to search for: ");
    scanf("%d",&num);
    search_number(num);

    return 0;
}


void TakeInput()
{
    printf("Enter 25 numbers of your choice...\n");
    for(int i=0;i<n;i++)
    {
        printf("%d: ",i+1);
        scanf("%d",&arr[i]);
    }
}

void print_array()
{
     for(int i=0;i<n;i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

void search_number(int number)
{
    int tally = 0;//stores the number of times the required number has been found
    for (int i = 0;i<n;i++)
    {
        if (arr[i] == number)
        {
            //printf("%d is present\n",number);
            tally++;
        }

    }
    if(tally)
    {
        printf("%d is present and it appears %d times.\n",number,tally);
    }
    else
    {
        printf("%d is not present in the array\n",number);
    }
}