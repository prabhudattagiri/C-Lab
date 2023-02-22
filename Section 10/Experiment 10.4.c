 /*Write a program using function to input a m x n matrix (of integers) and then transpose
it.*/
#include<stdio.h>
#include<conio.h>
int col;
void transpose (int a[][col],int m,int n)
{
    int i,j;
    printf("\n The transpose of the Matrix is \n");
    for(i=0;i<m;i++)
    {
        printf("\n\n");
        for(j=0;j<n;j++)
        {
            printf("%5d",a[j][i]);
        }
    }
}
void main()
{
    int i,j,row;
    printf("\n Enter the row size of the Matrix :");
    scanf("%d",&row);
    printf("\n Enter the column size of the Matrix :");
    scanf("%d",&col);
    int matrix [row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\n Enter the element to %d row and %d col :",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    transpose(matrix,row,col);
    getch();
}
