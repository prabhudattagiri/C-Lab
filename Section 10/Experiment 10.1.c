/*Write a program using function to determine whether a year is a leap year or not.*/
#include<stdio.h>
#include<conio.h>
void leapyear(int x)
{
    if(x%4==0)
        printf("\n This year is a leap year");
    else
        printf("\n This year is not a leap year");
}
void main()
{
    int year;
    printf("\n Enter a year to check it is leap year or not :");
    scanf("%d",&year);
    leapyear(year);
    getch();
}

