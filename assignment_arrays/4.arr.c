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
}student[450];
int n = 0;//global index variable



void CreateRecord();
void JoinedInYear();//shows all students joined in a particular year
void SearchByRoll();
static inline void Menu();
static inline void Display(int index);

int main()
{  
    int choice;

    do
    {
        Menu();
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                CreateRecord();
                break;
            case 2:
                for(int i=0;i<n;i++)
                    Display(i);
                break;               
            case 3:
                JoinedInYear();
                break;               
            case 4:
                SearchByRoll();
                break;
            case 5:
                exit(0);
        }

    } while (choice!=5);
    

    return 0;
}


void CreateRecord()//fn to create record done
{
    printf("\nRecord %d: ",n+1);
    printf("\nEnter Roll number of student: ");
    scanf("%d%*c",&student[n].roll);//ignores newline. 
    printf("Enter name: ");
    fgets(student[n].name,65,stdin);
    printf("Enter name of Department: ");
    fgets(student[n].department,35,stdin);
    printf("Enter Name of Course: ");
    fgets(student[n].course,35,stdin);
    printf("Enter Year of Joining: ");
    scanf("%d",&student[n].year);
    n++;

}

void JoinedInYear()
{
    int yr;
    _Bool has_student;
    printf("Enter the year to list students who joined: ");
    scanf("%d",&yr);
    printf("Students joined in %d: ",yr);
    for(int i = 0;i<=n;i++)
    {
        if(student[i].year==yr)
        {
            printf("\n%d: %s",i,student[i].name);
            has_student = 1;
        }
    }
    if(!has_student)
    {
        printf("No one has joined in %d",yr);
    }
}

void SearchByRoll()
{
    int roll;
    printf("\nEnter roll number of student to search: ");
    scanf("%d",&roll);
    for(int i = 0;i<=n;i++)
    {
        if(student[i].roll==roll)
        {
            Display(i);
        }
    }
}

static inline void Display(int index)
{
    printf("\nRoll number of student: %d\nName: %s\nDepartment: %s\nCourse: %s\nYear of Joining: %d\n",student[index].roll,student[index].name,student[index].department,student[index].course,student[index].year);
}

static inline void Menu()
{
    printf("\n1.Create New Record\n2.Display all students\n3.Display names of students joined in a particular year\n4.Search student by roll number\n5.Exit program\nEnter your choice: ");
}






