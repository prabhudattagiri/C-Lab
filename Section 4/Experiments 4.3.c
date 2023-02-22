/*Admission to professional course is subject to the any one of the following conditions:
a) Marks in Mathematics >= 60, and Marks in Physics >= 50, and Marks in Chemistry >= 40
b) Total in all three subjects >= 200
Write a program that takes as input the marks in three subjects and displays “Admitted” if the student is
admitted else displays “Not Admitted”.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int math,phy,chem,total;
    printf("\n Enter Mark in Mathematics Physics Chemistry :");
    scanf("%d %d %d",&math,&phy,&chem);
    total=math+phy+chem;
    if(math>=60&&phy>=50&&chem>=40||total>=200)
    {
        printf("\n Admitted");
    }
    else
    {
        printf("\n Not Admitted");
    }
    getch();
}
