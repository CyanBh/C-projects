#include <stdio.h>
void swap(int*, int*);

int main()
{
    int num;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&num);

    int my_arr[num];
    
	for (int i=0; i<num; i++)//this part puts the values in the arrays;
	{
		int val;

		printf("Enter the value of element %d  ",i);
		scanf("%d",&val);

        my_arr[i]=val;

	}
        printf("original array\n");

        for(int i = 0; i<num ; i++) //display my_arr
    {
        printf("%d\n",my_arr[i]);
    }

    for (int i = 1; i<num-1; i= i+2)
    {
        swap( &my_arr[i], &my_arr[i+1]);
    }
        printf("swapped array\n");
        for(int i = 0; i<num ; i++)//display my_arr after swapping
    {
        printf("%d\n",my_arr[i]);
    }



    return 0;
}

void swap(int* a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}