/*Write a program to input ‘n’ numbers (the value of ‘n’ is specified at runtime) in an array
and display the largest and smallest among them.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int size,sum=0;
    float average;
    int *array,i,j;
    printf("\n How Many number you want to enter :");
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
        scanf("%d",array+i);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(*(array+i) > *(array+j))
            {
                int temp=*(array+i);
                *(array+i)=*(array+j);
                *(array+j)=temp;
            }
        }
    }
    printf("\n Smallest number in array is %d \n Largest number in array is %d",*(array+0),*((array+size)-1));
    free(array);
    getch();
}
