// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter Number: ");
//     scanf("%d", &n);

//     for (int i = n; i >= 1; i--){

//         for (int k = 1; k <= n - i; k++){
//             printf(" ");
//         }
//         for (int j = 1; j <= (i * 2) -1; j++){
//                 if (j == 1 || j == (i * 2) - 1 || i == n){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter Number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++){
//         for (int j = 1; j <= i; j++){
//             if (j == 1 || j == i || i == n){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter Number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++){

//         for (int k = 1; k <= n - i; k++){
//             printf(" ");
//         }
//         for (int j = 1; j <= (i * 2) -1; j++){

//             if (j == 1 || j == (i * 2) - 1 || i == n){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter Number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {

//         for (int k = 1; k <= n - i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= (i * 2) - 1; j++)
//         {
//             if (j == 1 || j == (i * 2) - 1 || i == n)
//             {
//                 printf("*");
//             }
//             else
//             {

//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){

//     int A, a=2,b=5,c=3,d=6;

//     printf("%d\n",++b + --d + c++ - a);

//     printf("%d %d %d %d\n",a,b,c,d);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for(int k = 1;k<=n-i;k++){
//             printf(" ");

//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }



// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);

//     for (int i = 1; i <= n; i++){
//         for (int j = 1;j<=i;j++){
//             if(j == 1 || i == j || i == n) printf("%d",i);
//             else printf("%c",' ');
//         }
//         printf("\n");
//     }
// }


#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for (int i = 0; i < n;i++){
        for (int j = 0;j < i;j++){

        }
        for (int k = 0){

        }
    }
    return 0;
}