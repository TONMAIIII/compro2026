#include <stdio.h>

struct vector {
    float x;
    float y;
};

int main(){
    struct vector v1, v2, v3;
    printf("u_x: ");
    scanf("%f", &v1.x);
    printf("u_y: ");
    scanf("%f", &v1.y);

    printf("v_x: ");
    scanf("%f", &v2.x);
    printf("v_y: ");
    scanf("%f", &v2.y);

    v3.x = v1.x + v2.x;
    v3.y = v1.y + v2.y;

    printf("Resultant vector is equvalence to %.1fi + %.1fj\n", v3.x, v3.y);

    return 0;
}