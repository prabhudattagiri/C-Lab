/*Write a program to read ‘n’ real numbers and then insert a new real number at a given
position (after insertion, the array size should increase by 1). */
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,p,t,i,j;
    printf("\n How many real number you want to enter :");
    scanf("%d",&n);
    int array[n];
    for(i=0; i<n; i++)
    {
        printf("\n Enter %d real number :",i+1);
        scanf("%d",&array[i]);
    }
    printf("\n Before inserting number are :");
    for(i=0; i<n; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n Enter the new real number :");
    scanf("%d",&t);
    printf("\n Enter it Position in between 0 to %d :",n-1);
    scanf("%d",&p);
    for(i=n-1; i>=p; i--)
    {
        array[i+1]=array[i];
    }
    array[p]=t;
    n++;
    printf("\n After inserting the number are :");
    for(i=0; i<n; i++)
    {
        printf("%d ",array[i]);
    }
    getch();
}
