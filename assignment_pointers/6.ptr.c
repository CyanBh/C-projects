/*Write a C program for finding the Length of a String using Pointers.*/
#include <stdio.h>
int get_length(char* );

int main()
{
    char str[30];
    int length;
    
    printf("Enter the contents of the string:\n");
    fgets(str, 100, stdin);
    length = get_length(str);
    printf("\nThe length of the string %s is %d", str,length);

    return 0;
}

int get_length(char* p)
{
    int tally = 0;
    while(p!=NULL)
    {
        tally++;
        p++;
    }
    return tally;
}