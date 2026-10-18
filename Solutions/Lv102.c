
#include <stdio.h>

int main()
{
    int student_ID;
    int age;
    char name_initial;
    float CGPA;

    printf("Enter your Student ID: ");
    scanf("%d", &student_ID);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter the first letter of your name: ");
    scanf(" %c", &name_initial);

    printf("Enter your CGPA: ");
    scanf("%f", &CGPA);

    printf("\n===== Student Profile =====\n");
    printf("Student ID: %d\n", student_ID);
    printf("Age: %d\n", age);
    printf("Initial: %c\n", name_initial);
    printf("CGPA: %.2f\n", CGPA);

    return 0;
}
