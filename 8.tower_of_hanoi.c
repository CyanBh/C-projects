#include <stdio.h>

void tower(int n, char from_rod, char aux_rod, char to_rod);

int main()
{
    int n;
    printf("Enter the number of disks: ");
    scanf ("%d",&n);

    tower(n,'A','B','C');
    return 0;
}

void tower(int n ,char beg, char aux, char end)
{
    if(n<=0)
        printf("\nThe number of disks provided must be positive and greater than zero");

    else if(n==1)
        printf("\nMoved disk from %c to %c", beg, end);

    else
    {
        tower(n-1, beg, end, aux);
        printf("\nMoved disk from %c to %c", beg, end);
        tower(n-1, aux, beg, end);
    }

}