/*Write a program that takes as input an integer ‘n’ and computes the following series: 1 -
(2/3!) + (3/4!) - (4/5!) + .... ± (n/(n+1)!).*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    float sum=0;
    printf("\n Enter the value of n :");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        int fac=1;
        for(j=1;j<=i+1;j++)
        {
            fac=fac*j;
        }
        if(i%2==0)
        {
            sum=sum-(float)i/fac;
        }
        else
        {
            sum=sum+(float)i/fac;
        }
    }
    printf("\n Sum is %.4f",1+sum);
    getch();
}
