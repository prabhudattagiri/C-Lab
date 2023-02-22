/*Write a program to input a number and check whether it is Armstrong or not (An
Armstrong number is an integer such that the sum of the cubes of its digits is equal to the number itself. For
example, 371 is an Armstrong number since 3^3 + 7^3 + 1^3 = 371).*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,num,armNum=0;
    printf("\n Enter a Number :");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        i=n%10;
        armNum=armNum+(i*i*i);
        n=n/10;
    }
    if(num==armNum)
    {
        printf("\n %d is an Armstrong Number ",num);
    }
    else
    {
        printf("\n %d is not an Armstrong Number ",num);
    }
    getch();
}
