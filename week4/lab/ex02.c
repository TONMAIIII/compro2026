#include <stdio.h>

int main(){
 
    int i = 0;
    int a[10];

    while(i < 10){
         printf("%d. Enter a number: ", i + 1);
        scanf("%d", &a[i]);
     
        i++;
    }

    printf("total sum is %d\n", a[0] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6] + a[7] + a[8] + a[9]);
    
    printf("Average is %.02f\n", (float)(a[0] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6] + a[7] + a[8] + a[9]) / 10);

    return 0;
}