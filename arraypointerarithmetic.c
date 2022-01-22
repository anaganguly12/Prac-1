/*
suppose arr is a array.
int *ptr = arr; ptr points at the first element of the array.
so, the value of ptr and &arr[0] are same;
arr[i] and *(arr+i) are same.
if arr is a pointer to arr[0],(arr+i) is a pointer to arr[i].
*/

#include <stdio.h>
int main()
{
    int arr[] = {8, 1, 9, 2, 3, 4, 12};
    // printf("%d\n", arr[0]);
    printf("The address of first element%d\n", &arr[0]);
    printf("The address of first element%d\n", arr);
    printf("The address of second element%d\n", &arr[1]);
    printf("The address of second element%d\n\n", (arr + 1));

    printf("The value at address of first element is %d\n", *(&arr[0]));
    printf("The value at address of first element is %d\n", arr[0]);
    printf("The value at address of first element is %d\n", *arr);
    printf("The value at address of second element is %d\n", *(&arr[1]));
    printf("The value at address of second element is %d\n", arr[1]);
    printf("The value at address of second element is %d\n", *(arr + 1));
    return 0;
}