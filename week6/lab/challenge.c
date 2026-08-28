#include <stdio.h>

struct subject
{
    float math;
    float eng;
    float sci;
    float his;
};

struct Student
{
    char name[20];
    int ID;
    struct subject scores;
    float total;
};

int main()
{
    struct Student a[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter name, ID, and 4 grades for student %d: ", i + 1);
        scanf("%s %d %f %f %f %f", a[i].name, &a[i].ID, &a[i].scores.math, &a[i].scores.eng, &a[i].scores.sci, &a[i].scores.his);
    }

    float b = 0;
    int c = 0;
    printf("\nStudent Averages:\n");
    for (int i = 0; i < 3; i++)
    {
        a[i].total = (a[i].scores.math + a[i].scores.eng + a[i].scores.sci + a[i].scores.his)/4;
        printf("%s (ID:%d): %.2f\n", a[i].name,a[i].ID,a[i].total);

        if (b < a[i].total){b = a[i].total; c = i;} 
    }

    printf("\nTop Student: %s with %.2f\n\n",a[c].name,b);
    printf("Subject Averages:\n");
    printf("Math: %.2f\nEnglish: %.2f\nScience: %.2f\nHistory: %.2f\n\n",a[c].scores.math,a[c].scores.eng,a[c].scores.sci,a[c].scores.his);

    if(a[c].scores.math > a[c].scores.eng && a[c].scores.math > a[c].scores.sci && a[c].scores.math > a[c].scores.his)printf("Top Subject: Math with average %.2f",a[c].scores.math);
    if(a[c].scores.eng > a[c].scores.math && a[c].scores.eng > a[c].scores.sci && a[c].scores.eng > a[c].scores.his)printf("Top Subject: Math with average %.2f",a[c].scores.eng);
    if(a[c].scores.sci > a[c].scores.math && a[c].scores.sci > a[c].scores.eng && a[c].scores.sci > a[c].scores.his)printf("Top Subject: Math with average %.2f",a[c].scores.sci);
    if(a[c].scores.his > a[c].scores.math && a[c].scores.his > a[c].scores.eng && a[c].scores.his > a[c].scores.sci)printf("Top Subject: Math with average %.2f",a[c].scores.his);

    return 0;
}