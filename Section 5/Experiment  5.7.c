/*Write a program to input a number and check whether it is palindrome or not (a
palindrome number is a number that remains the same when its digits are reversed, e.g., 16461).*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,num,revNum=0;
    printf("\n Enter a number :");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        revNum=(revNum*10)+(n%10);
        n=(n/10);
    }
    if(num==revNum)
    {
        printf("\n The number is Palindrome ");
    }
    else
    {
        printf("\n The number is not Palindrome");
    }
    getch();
}
