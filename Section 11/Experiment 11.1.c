/*A student is represented by the following attributes:
− Roll number (int)
- Name (string)
- Mark in subject 1 (float)
- Mark in subject 2 (float)
- Mark in subject 3 (float)
Write a program using structure to create data for 50 students and then find the total marks for each
student and average mark of all students.
*/
#include<stdio.h>
#include<conio.h>
struct student
{
    int rollno;
    char name [20];
    float sub1;
    float sub2;
    float sub3;
};
void main()
{
    struct student stud[50];
    int i;
    float sum=0,totalsum=0,average;
    for(i=0;i<50;i++)
    {
        printf("\n Enter student Roll Number :");
        scanf("%d",&stud[i].rollno);
        getchar();
        printf("\n Enter Student Name :");
        gets(stud[i].name);
        printf("\n Enter Mark in 1st subject :");
        scanf("%f",&stud[i].sub1);
        printf("\n Enter Mark in 2nd subject :");
        scanf("%f",&stud[i].sub2);
        printf("\n Enter Mark in 3rd subject :");
        scanf("%f",&stud[i].sub3);
    }
    printf("\n Student Details");
    printf("\n-----------------");
    for(i=0;i<50;i++)
    {
        printf("\n Roll Number : %d\n Name of student : %s",stud[i].rollno,stud[i].name);
        printf("\n Mark in 1st Subject : %f\n Mark in 2nd Subject : %f\n Mark in 3rd Subject : %f",stud[i].sub1,stud[i].sub2,stud[i].sub3);
        sum=stud[i].sub1+stud[i].sub2+stud[i].sub3;
        totalsum=totalsum+sum;
        printf("\n Total Mark of student : %f",sum);
    }
    average=totalsum/50;
    printf("\n Average of all student is %f",average);
    getch();
}
