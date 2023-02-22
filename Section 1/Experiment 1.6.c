/*Write a program to swap two numbers.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,t;
    printf("\n Enter two number :");
    scanf("%d %d",&a,&b);
    printf("\n Before swaping the value of two number is %d %d",a,b);
    t=a;
    a=b;
    b=t;
    printf("\n After swaping the value of two number is %d %d",a,b);
    getch();
}
