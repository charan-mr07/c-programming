#include <stdio.h>
int main()
{
    char name[30];
    float cgpa;
    char grade;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    printf("Enter grade: ");
    scanf(" %c", &grade);

    printf("Name: %s\nCGPA: %.2f\nGrade:%c\n", name, cgpa, grade);
    return 0;
}