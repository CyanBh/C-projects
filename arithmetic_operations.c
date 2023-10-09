#include <stdio.h>
#include <stdlib.h>

void show_menu();


int  choice_manager(int, float, float);


int main()
{
    int num1, num2;
    int choice;
    printf("Here you will be prompted to enter two numbers first, and then enter the operation to be performed on them...\n");
    printf("\nEnter the first number: ");
    scanf("%d",&num1);
    
    printf("Enter the second number: ");
    scanf("%d",&num2);
    
    show_menu();
    scanf("%d",&choice);
    choice_manager(choice,num1,num2);

    return 0;
}

void show_menu() 
{
    printf("Enter your response to select an action for the numbers:\n");
    printf("1. Add the two numbers\n");
    printf("2. Subtract the second number from the first\n");
    printf("3. Multiply the two numbers\n");
    printf("4. Divide the first number by the second\n");
    printf("Enter your response:  ");
    
}

int  choice_manager(int choice, float var1, float var2)
{
    
    
    
    switch (choice)
    {
    case 1:
      printf("\nthe sum of %f and %f is %f\n",var1,var2,(var1+var2));
      break;

    case 2:
      printf("\n%f - %f is %f\n",var1, var2, var1-var2);
      break;


    case 3:
      printf("\nthe product of %f and %f is %f\n",var1,var2,(var1*var2));
      break;

    case 4:
      printf("\n%f divided by %f is %f\n",var1, var2, var1/var2);
      break;

    default:
      printf("\nInvalid Response. Exiting program...\n");
      exit(1);
      
    }
    

}
