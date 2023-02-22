/*Write a program to count the number of digits in a number.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,count=0;
    printf("\n Enter a Integer Number :");
    scanf("%d",&n);
    while(n>0)
    {
        count++;
        n=n/10;
    }
    printf(" Total no of digit is %d",count);
    getch();
}
