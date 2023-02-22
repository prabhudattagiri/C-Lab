/*Write a program that takes an integer ‘n’ as input and prints the Fibonacci series up to
‘n’. (Hint: Fibonacci series: 1 1 2 3 5 8 13 21 …)*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,fib,fib1=0,fib2=1;
    printf("\n Enter a Number :");
    scanf("%d",&n);
    printf("\n Fibonacci Number Upto %d is ",n);
    for(i=1;i<=n-2;i++)
    {
        fib=fib1+fib2;
        if(fib>n)
        {
            return;
        }
        printf(" %d",fib);
        fib1=fib2;
        fib2=fib;
    }
    getch();
}
