#include <stdio.h>

struct A {
    char time[10];
    int min;
    int sec;
    int total;
};

int main(){
    struct A a[3];
    printf("Time input (m:s): ");
    scanf("%s", a[0].time);
    printf("Time input (m:s): ");
    scanf("%s", a[1].time);
    printf("Time input (m:s): ");
    scanf("%s", a[2].time);

    for (int i = 0; i < 3; i++){
        if (a[i].time[1] == ':'){
            a[i].min = (a[i].time[0] - '0');
            a[i].sec = (a[i].time[2] - '0') * 10 + (a[i].time[3] - '0');
        }
        else if (a[i].time[2] == ':' ){
            a[i].min = (a[i].time[0] - '0') * 10 + (a[i].time[1] - '0');
            a[i].sec = (a[i].time[3] - '0') * 10 + (a[i].time[4] - '0');
        }
    }

    a[0].total = a[0].min * 60 + a[0].sec + a[1].min * 60 + a[1].sec + a[2].min * 60 + a[2].sec;    
    printf("Total time elasped: %d second (s)\n", a[0].total);
    return 0;
}