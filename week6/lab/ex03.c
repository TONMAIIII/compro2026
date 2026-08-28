#include <stdio.h>
#include <math.h>

int main(){
    struct point {
        float x;
        float y;
        float d;
    };
    struct point points[2];
    for (int i = 0; i < 2; i++){
        printf("x%d: ", i+1);
        scanf("%f", &points[i].x);
        printf("y%d: ", i+1);
        scanf("%f", &points[i].y);
    }

    points[0].d = sqrt(pow(points[1].x - points[0].x, 2) + pow(points[1].y - points[0].y, 2));
    printf("Distance between points (%.2f, %.2f) and (%.2f, %.2f) is %.3f unit (s)\n", points[0].x, points[0].y, points[1].x, points[1].y, points[0].d);

    return 0;
}