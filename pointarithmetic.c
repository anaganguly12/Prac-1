#include <stdio.h>
int main()
{
    int a = 26;
    int *ptr = &a;

    printf("%d\n", ptr);
    printf("%d\n", ptr + 1);
    printf("%d\n", ptr++);
    printf("%d\n", ptr - 2);
    return 0;
}