#include <stdio.h>
union student
{
    int Rollno;
    char Name[200];
    int Age;
    char Grade;
};
int main()
{
    int input, i;
    char buffer; // removing ascii values;a
    printf("Enter the input:");
    scanf("%d", &input);
    union student details[input];
    for (i = 0; i < input; i++)
    {
        printf("%d: Roll no :", i);
        scanf("%d", &details[i].Rollno);

        printf("Name :");
        scanf("%s", details[i].Name);

        printf("Age:");
        scanf("%d", &details[i].Age);

        scanf("%c", &buffer);
        printf("Grade:");
        scanf("%c", &details[i].Grade);

        scanf("%c", &buffer);
    }
    for (i = 0; i < input; i++)
    {
        printf("%c",details[i].Grade);
    }
    return 0;
}
