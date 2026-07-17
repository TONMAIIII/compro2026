#include <stdio.h>

int main() {
    char name[100];
    int student_id;
    float prog_score,phy_score,cal_score;

    printf("Enter your Name: ");
    scanf("%[^\n]", name);
    printf("Enter your Student ID: ");
    scanf("%d", &student_id);
    printf("Enter your Programming score: ");
    scanf("%f", &prog_score);
    printf("Enter your Physics score: ");
    scanf("%f", &phy_score);
    printf("Enter your Calculus score: ");
    scanf("%f", &cal_score);

    printf("Hi %s(%d)! Your GPA is %.02f\n", name, student_id, (prog_score + phy_score + cal_score) / 3);

    return 0;
}