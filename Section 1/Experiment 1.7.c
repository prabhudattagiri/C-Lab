/*Write a program to swap two numbers without using a third variable.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("\n Enter two number :");
    scanf("%d %d",&a,&b);
    printf("\n Before swaping the value of two number is %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n After swaping the value of two number is %d %d",a,b);
    getch();
}
