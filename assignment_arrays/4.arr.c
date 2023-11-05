/*Create a structure to specify data on students given below:
Roll number, Name, Department,Course, Year of joining. (done)
Assume that there are not more than 450 students in the college.
(1) Write a function to print names of all students who joined in a particular year.(done)
(2) Write a function to print the data of a student whose roll number is received by the function.*/
#include<stdio.h>
#include<stdlib.h>

struct Student
{
    int roll,year;
    char name[65],department[35],course[35];
}s[450];//array of student


inline void menu();
void create_record();
inline void display(int index);
void display_name_by_year();
void search_by_roll();





int main()
{  
    int choice;

    do
    {
        menu();
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                create_record();
                break;
            case 2:
                display_name_by_year();
                break;
            case 3:
                search_by_roll();
                break;
            case 4:
                exit(0);
        }

    } while (choice!=4);
    

    return 0;
}

int n = 0;//index variable
void create_record()//fn to create record done
{
    printf("\nStudent %d: \n",n);
    printf("Enter Roll number of student: ");
    scanf("%d",&s[n].roll);
    printf("Enter name: ");
    scanf("%[^\n]s",s[n].name);
    printf("Enter name of Department: ");
    scanf("%[^\n]s",s[n].department);
    printf("Enter Name of Course: ");
    scanf("%[^\n]s",s[n].course);
    printf("Enter Year of Joining: ");
    scanf("%d",&s[n].year);
    n++;

}

void display_name_by_year()
{
    int yr;
    _Bool has_student;
    printf("Enter the year to list students who joined: ");
    scanf("%d",&yr);
    
    for(int i = 0;i<=n;i++)
    {
        if(s[i].year==yr)
        {
            printf("%s\n",s[i].name);
            has_student = 1;
        }
    }
    if(!has_student)
    {
        printf("No one has joined in %d",yr);
    }
}

void search_by_roll()
{
    int roll;
    printf("\nEnter roll number of student to search: ");
    scanf("%d",&roll);
    for(int i = 0;i<=n;i++)
    {
        if(s[i].roll==roll)
        {
            display(i);
        }
    }
}

inline void display(int index)
{
    printf("Roll number of student: %d\nName: %s\nDepartment: %s\nCourse: %s\nYear of Joining: %d\n",s[index].roll,s[index].name,s[index].department,s[index].course,s[index].year);
}

inline void menu()
{
    printf("1.Create New Record\n2.Display names of students joined in a particular year\n3.Search student by roll number\n4.Exit program\nEnter your choice: ");
}






