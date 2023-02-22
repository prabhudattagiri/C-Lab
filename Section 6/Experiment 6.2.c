/*Write a program to input ‘n’ numbers and print the 2nd largest and 2nd smallest number.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    printf("\n How many number you want to enter :");
    scanf("%d",&n);
    int array[n];
    printf("\n Enter the element to the array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]>array[j])
            {
                int temp;
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("\n The 2nd smallest number is %d and 2nd Largest number is %d",array[1],array[n-2]);
    getch();
}
