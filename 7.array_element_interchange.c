#include <stdio.h>
//incomplete

int main()
{
    int num;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&num);

    int my_arr[num],temp1_arr[num], temp2_arr[num], new_arr[num];

	for (int i=0; i<num; i++)//this part puts the values in the arrays;
	{
		int val;

		printf("Enter the value of element %d  ",i);
		scanf("%d",&val);

        my_arr[i]=val;//array that the user sees


        if (i % 2 == 0)//for even number index, store in old array
        {
            temp1_arr[i] = val;
            temp1_arr[i+1] = 0;
        }
		

        if (i % 2 != 0)//for odd number index, store in temporary array
        {
            temp2_arr[i] = val;
            temp2_arr[i-1] = 0;
            temp2_arr[i+1] = 0;
            
        }
	}

    for(int i = 0; i<num ; i++)
    {
        printf("%d    %d    %d\n",my_arr[i],temp1_arr[i],temp2_arr[i]);
    }









    return 0;
}