#include <stdio.h>

int main()
{
    int a[10];
    int b =0 ,c = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0) b++;
        else c++;
    }
    printf("Even numbers: %d\n", b);
    printf("Odd numbers: %d\n", c);
    return 0;
}