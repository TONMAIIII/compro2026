#include <stdio.h>

int main(){
    float b,c;
    int a;
    while (1){
        printf("====== ATM MENU ======\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\nChoose an option: ");
        scanf("%d",&a);
        if (a == 1)printf("Current Balance: %.2f\n\n",b);
        else if(a == 2){
            printf("Enter amount to deposit: ");
            scanf("%f",&c);
            b += c;
            printf("\n");
        }
        else if (a == 3){
            printf("Enter amount to withdraw: ");
            scanf("%f",&c);
            b -= c;
            printf("Withdrawal successful.\n\n");
        }
        else{
            printf("Thank you for using the ATM.\n\n");
            break;
        }
    }
    return 0;
}