#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    printf("Enter the no of students : ");
    int n;
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++)
    {
        printf("\n\nEnter information of students no : %d\n\n",i+1);

        printf("Enter name: ");
        scanf("\n");
        gets(s[i].name);
        printf("\n");

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        printf("\n");

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        printf("\n");



    }

    for(int i=0;i<n;i++)
    {
        printf("\n\nDisplaying Information of students no : %d\n\n",i+1);

        printf("Name: ");
        puts(s[i].name);
        printf("\n");

        printf("Roll number: %d\n",s[i].roll);
        printf("\n");

        printf("Marks: %.1f\n", s[i].marks);
        printf("\n");



    }
    return 0;
}
