#include <stdio.h>
struct student
{
    int rollno;
    char name[200];
    int age;
    char grade;
};
int main()
{
    int input, i;
    char buffer;//removing ascii values;a
    printf("Enter the input:");
    scanf("%d", &input);
    struct student details[input];
    for (i = 0; i < input; i++)
    {
        printf("%d:Student Roll no :", i);
        scanf("%d", &details[i].rollno);

        printf("Name :");
        scanf("%s", details[i].name);

        printf("Age:");
        scanf("%d", &details[i].age);

        scanf("%c", &buffer);
        printf("Grade:");
        scanf("%c", &details[i].grade);

        scanf("%c", &buffer);
    }
    for (i = 0; i < input; i++)
    {
        printf("%d %s %d %c\n", details[i].rollno, details[i].name, details[i].age, details[i].grade);
    }

    return 0;
}
