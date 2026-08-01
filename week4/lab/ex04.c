#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("\nMultiplication Table for %d\n",a);
    for(int i = 1; i < 13;i++){
        printf("%d x %d = %d\n",a,i,a*i);
    }
    return 0;
}
