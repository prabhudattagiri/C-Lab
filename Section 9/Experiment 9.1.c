/*Write a program using pointers to input a 4X5 matrix and then display it.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,matrix [4][5];
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\n Enter the element to %d row and %d col :",i+1,j+1);
            scanf("%d",*(matrix+i)+j);
        }
    }
    printf("\n The Matrix is :");
    for(i=0;i<4;i++)
    {
        printf("\n\n");
        for(j=0;j<5;j++)
        {
            printf("%-5d",*(*(matrix+i)+j));
        }
    }
    getch();
}
