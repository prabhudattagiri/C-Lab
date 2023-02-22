/*Write a program to take a number as input and check whether it is even or odd using
conditional operator (do not use if statement)*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("\nEnter a number :");
    scanf("%d",&n);
    (n%2==0)?printf("\nNumber is Even"):printf("\nNumber is Odd");
    getch();

}
