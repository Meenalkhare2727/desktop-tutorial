//WAP to read name of a student // stucture
#include <stdio.h>

struct student
{
    char studentName[10];
    char rollNo[10];
    int totalMarks;
};

int main()
{
    struct student s1;
    printf("Enter the Student Name:-");
    scanf("%s", s1.studentName); // when use string dont put & in scanf

    printf("Enter the Roll No:-");
    scanf("%s", s1.rollNo);

    printf("Enter the Total Marks:-");
    scanf("%d", &s1.totalMarks);

printf("\n The Student Name : %s",s1.studentName);
printf("\n The roll number :%s",s1.rollNo);
printf("\n The Total marks :%d",s1.totalMarks);




    return 0;
}