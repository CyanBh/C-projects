#include <stdio.h>

int sum_array(int *, size_t);

int main(void) {
  size_t n; /* use size_t; an array can be larger than the maximum value an int can represent */
  printf("Enter the number of elements in the array: ");
  scanf("%zu", &n); /* use the zu conversion specifier for size_t; also add a check for return value, so in case it fails to read the right stuff from the standard input, you wouldn't have any weird behavior in your program */
  int arr[n];
  for (size_t i = 0; i < n; i++) {
    printf("element %zu: ", i + 1);
    scanf("%d", &arr[i]); /* add a check for return value here as well */
  }
  int sum = sum_array(arr, sizeof(arr)/sizeof(arr[0])); /* sizeof(arr) will return the size of the entire array (in bytes), divide that with sizeof(arr[0]), which is the size of one element of the array, and you'd get the number of elements present in the array */
  printf("\nThe sum of elements of the array is %d", sum);

  return 0;
}

int sum_array(int *p, size_t size) {
  int sum = 0;

  for (size_t i = 0; i < size; i++) {
    sum += *p;
    p++;
  }

  return sum;
}