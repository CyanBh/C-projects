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
int n = 0;//global index variable



void create_record();
void display_name_by_year();
void search_by_roll();
static inline void menu();
static inline void display(int index);

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
                for(int i=0;i<n;i++)
                    display(i);
                break;               
            case 3:
                display_name_by_year();
                break;               
            case 4:
                search_by_roll();
                break;
            case 5:
                exit(0);
        }

    } while (choice!=5);
    

    return 0;
}


void create_record()//fn to create record done
{
    printf("\nRecord %d: ",n+1);
    printf("\nEnter Roll number of student: ");
    scanf("%d%*c",&s[n].roll);//ignores newline. 
    printf("Enter name: ");
    fgets(s[n].name,65,stdin);
    printf("Enter name of Department: ");
    fgets(s[n].department,35,stdin);
    printf("Enter Name of Course: ");
    fgets(s[n].course,35,stdin);
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
    printf("Students joined in %d: ",yr);
    for(int i = 0;i<=n;i++)
    {
        if(s[i].year==yr)
        {
            printf("\n%d: %s",i,s[i].name);
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

static inline void display(int index)
{
    printf("\nRoll number of student: %d\nName: %s\nDepartment: %s\nCourse: %s\nYear of Joining: %d\n",s[index].roll,s[index].name,s[index].department,s[index].course,s[index].year);
}

static inline void menu()
{
    printf("\n1.Create New Record\n2.Display all students\n3.Display names of students joined in a particular year\n4.Search student by roll number\n5.Exit program\nEnter your choice: ");
}






