#include <stdio.h>

int main()
{
    struct Student
    {
        char name[50];
        int age;
        float scores;
    };
    struct Student students[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Student'%d name: ", i + 1);
        scanf("%[^\n]", students[i].name);
        
        printf("Student's %d age: ", i + 1);
        scanf("%d", &students[i].age);
        
        printf("Student's %d scores: ", i + 1);
        scanf("%f", &students[i].scores);

        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Student %d: %s, Age: %d, Scores: %.2f\n", i + 1, students[i].name, students[i].age, students[i].scores);
    }

    return 0;
}
