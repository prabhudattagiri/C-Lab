/*Write a program to input a square matrix (a matrix of order n × n) and then print its upper
triangular matrix.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    printf("\n Enter the row and column of square matrix :");
    scanf("%d",&n);
    int matrix[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\n Enter the element to %d row and %d column :",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n Its Upper triangular matrix is ");
    for(i=0; i<n; i++)
    {
        printf("\n");
        for(j=0; j<n; j++)
        {
            if(i<=j)
            {
                printf("%d\t",matrix[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
    }

    getch();
}
