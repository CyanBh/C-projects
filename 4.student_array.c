/**author: Cyan A91005222141
*/
#include <stdio.h>



int main ()
{



    int total_students, total_marks=0; //number of students and the sum of their marks

	printf("Enter the number of students: ");
	scanf ("%d", &total_students);

	int arr_student[total_students];

	for (int i = 1; i <= total_students; i++	)
	{
		int marks;

		printf("\n\nEnter the marks of the student number %d: ",i);
		scanf("%d",&marks);//stores the values to be entered in the array

		arr_student[i] = marks;
		printf ("Marks recorded %d of %d", i, total_students);
		total_marks = total_marks + marks;
	}

	float average = total_marks/total_students;

	printf("\n\nThe average marks of %d students is %f ", total_students, average);



    return 0;


}



