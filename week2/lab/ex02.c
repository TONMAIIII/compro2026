#include <stdio.h>

int main()
{
    int m;
    printf("Enter total minutes: ");
    scanf("%d", &m);
    printf("%d minutes is %d hours and %d minutes\n", m, m/60, m%60);
            
    return 0;
}