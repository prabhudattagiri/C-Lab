/*Write a program to read a four-digit integer and print the sum of its digits. [Hint: Use /
and % operators.]*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0;
    printf("\nEnter a four digit number :");
    scanf("%d",&n);
    sum=(n%10)+((n/10)%10)+((n/100)%10)+((n/1000)%10);
    printf("\nSum of digits of four digit int %d is %d",n,sum);
    getch();
}
