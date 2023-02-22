/*Write a program to find the number of and sum of all integers greater than 100 and less
than 200 that are divisible by 7.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sum=0,count=0;
    for(i=100;i<200;i++)
    {
        if(i%7==0)
        {
            sum=sum+i;
            count++;
        }
    }
    printf("\n There are %d number which are greater than 100 and less than 200 and divisible by 7 \n There sum is %d",count,sum);
    getch();
}
