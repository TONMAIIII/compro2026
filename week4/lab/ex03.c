#include <stdio.h>

int main(){
    int a;
    while(1){
        printf("Enter a number: ");
        scanf("%d", &a);
        if(a == 0) break;
        if(a % 2 == 0)printf("%d is even\n",a);
        else printf("%d is odd\n",a);
    }
    printf("Exiting Program... Bye\n");
    return 0;
}