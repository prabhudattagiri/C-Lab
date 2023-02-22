/*Write a program to input three numbers and find out the smallest.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,smallest;
    printf("\nEnter three numbers :");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b&&a<c)
    {
        smallest=a;
    }
    else if(b<a&&b<c)
    {
        smallest=b;
    }
    else
    {
        smallest=c;
    }
    printf("\nSmallest number among three number is %d",smallest);
    getch();
}
