/*Write a program to input a number and print “ODD” if the number is odd and “EVEN” if
the number is even.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("\nEnter a number to check even or odd :");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\nEVEN");
    }
    else
    {
        printf("\nODD");
    }
    getch();
}
