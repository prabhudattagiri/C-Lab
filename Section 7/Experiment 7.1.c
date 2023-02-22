/*Write a program to input a square matrix (a matrix of order n × n) and check whether it is
symmetric or not (A matrix A = (a ij) is symmetric if a ij = a ji, for all i and j).*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int n,i,j;
    printf("\n Enter the no of row and column of a square matrix :");
    scanf("%d",&n);
    int matrix [n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\n Enter the element to %d row and %d column :",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    int result=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix[i][j]!=matrix[j][i])
            {
                printf("\n The Matrix is not symmetric ");
                exit(0);
            }

        }
    }
    printf("\n The Matrix is symmetric ");

    getch();
}

