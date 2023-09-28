/**author: Cyan A91005222141
*/
#include <stdio.h>

int takeInputStudentArrayAndDisplayAverage();

int main ()
{
    takeInputStudentArrayAndDisplayAverage();
	return 0;

}


 takeInputStudentArrayAndDisplayAverage()
{
    	int totalStudents, totalMarks=0; //number of students and the sum of their marks

	printf("Enter the number of students: ");
	scanf ("%d", &totalStudents);

	int studentMarks[totalStudents];

	for (int counter = 1; counter <= totalStudents; counter++	)
	{
		int marks;

		printf("\n\nEnter the marks of the student number %d: ",counter);
		scanf("%d",&marks);//stores the values to be entered in the array

		studentMarks[counter] = marks;
		printf ("Marks recorded %d of %d", counter, totalStudents);
		totalMarks = totalMarks + marks;
	}

	float averageMarks = totalMarks/totalStudents;

	printf("\n\nThe average marks of %d students is %f\n ", totalStudents, averageMarks);
}
