/*Write a program to input ‘n’ numbers and sort them in descending order.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    printf("\n How many number you want to enter :");
    scanf("%d",&n);
    int array [n];
    printf("\n Enter element to the array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]<array[j])
            {
                int temp;
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("\n Input number in descending order are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    getch();
}
