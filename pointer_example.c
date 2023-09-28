#include <stdio.h>

int main()
{
    // printf("sizeof(int): %ld\n", sizeof(int));
    // printf("sizeof(long int): %ld\n", sizeof(long int));

    char letter = 'j';
    char *p = &letter;
    printf("%p\n", p);
    printf("%c\n", *p);

    int arr[] = {5,2,3};
    printf ("%d\n", *arr); // first element
    printf ("%d\n", *(arr + 1));
    printf ("%d\n", *(arr + 2));

    int size;
    printf("Enter a size: ");
    scanf("%d", &size);

    // VLA (Variable length array)
    // stored in heap
    int arr2[size];
    
    int matrix[2][2] = {1,2,3,4};
    // 1st row -> arr[0] -> {arr[0][0], arr[0][1]}
    // 2nd row -> arr[1] -> {arr[1][0], arr[1][1]}

    // array of pointers //since an array is a pointer by default,
    //when initiazed to a pointer variable,
    //the variable can be treated as an array
    int *firstRow = matrix[0], *secondRow = matrix[1];
    printf ("%d %d\n", firstRow[0], firstRow[1]);
    printf ("%d %d\n", secondRow[0], secondRow[1]);


    return 0;
}
// stack, heap, text
