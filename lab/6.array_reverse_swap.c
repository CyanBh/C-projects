//Program to copy value of one array to another in reverse order
//author: CyanBh A91005222141

#include <stdio.h>

int main()
{
	int num; //number of elements
	printf("Enter the number of elements in the Array: ");
	scanf ("%d", &num);
	printf("\n");

	int old_arr[num], new_arr[num];

	for (int i=0;i<num;i++	)
	{
		int val;//stores the values to be entered in the array

		printf("Enter the value of element %d  ",i);
		scanf("%d",&val);

		old_arr[i] = val;
		new_arr[num-1-i] = val;
	}

	printf("\nPrinting the original array and reversed array side by side....\n");
	for (int i=0;i<num;i++)
	{
		printf("%d	%d\n",old_arr[i],new_arr[i]);
	}
	return 0;
}
