//author: CyanBh A91005222141
#include <stdio.h>




int main ()
{
    int total_students;

	printf("Enter the number of students: ");
	scanf ("%d", &total_students);

	int student_arr[total_students][2];

	for (int i = 0; i < total_students; i++)
	{
		int roll_no, marks;//to store roll number and marks

		printf("\nEnter the roll number of the student: ");
		scanf("%d",&roll_no);

		student_arr[i][0] = roll_no;

		printf("\nEnter the marks of the student: ");
		scanf("%d",&marks);

		student_arr[i][1] = marks;

		printf ("Record Created %d of %d\n\n",i+1,total_students);
		
	}
	printf("\n\nDisplaying Data....\n");
	printf("Roll Number\tMarks\n----------------------\n");

	for (int i = 0; i < total_students; i++)
	{
	    printf("%d\t\t%d\n", student_arr[i][0], student_arr[i][1]);
    }

	return 0;
}



