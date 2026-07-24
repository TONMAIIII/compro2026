#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    switch (x > 0 && x <= 100 ? 1:0)
    {
    case 1:
        switch (x % 2)
        {
        case 0:
            printf("%d is even\n", x);
            break;
        default:
            printf("%d is odd\n", x);
            break;
        }
        break;
    case 0:
        printf("%d is out of range\n", x);
        break;
    }
    
    return 0;
}