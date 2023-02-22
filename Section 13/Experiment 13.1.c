/* Write a program to input ‘n’ numbers (the value of ‘n’ is specified at runtime) in an array
and display their sum and average.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int size,sum=0;
    float average;
    int *array,i;
    printf("\n Enter the size of the array :");
    scanf("%d",&size);
    array=(int *)calloc(size,sizeof(int));
    if(array==NULL)
    {
        printf("\n No space is available");
        exit(0);
    }
    printf("\n Space allocated for %d integers",size);
    for(i=0;i<size;i++)
    {
        printf("\n Enter %d number to array :",i+1);
        scanf("%d",array);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+(*array);
    }
    average=(float)sum/size;
    printf("\n Sum of element of array is %d \n Average of element is %.2f",sum,average);
    free(array);
    getch();
}
