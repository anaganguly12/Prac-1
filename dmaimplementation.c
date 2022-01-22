#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Use of malloc()
    int n;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value %d value: \n", i);
        scanf("%d", (ptr + i));
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d index of the array is: %d\n", i, *(ptr + i));
    }

    return 0;
}