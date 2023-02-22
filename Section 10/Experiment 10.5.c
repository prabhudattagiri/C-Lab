/*Write a program using function to input a m x n matrix (of integers) and then find the
largest, the 2nd largest, the smallest, and the 2nd smallest numbers in it.*/
#include<stdio.h>
#include<conio.h>
int col;
void matrixoperation (int a[][col],int,int);
void main()
{
    int row,i,j;
    printf("\n Enter row size of the matrix :");
    scanf("%d",&row);
    printf("\n Enter col size of the matrix :");
    scanf("%d",&col);
    int matrix [row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\n Enter Element to %d row and %d col :",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    matrixoperation(matrix,row,col);
    getch();
}
void matrixoperation (int a[][col],int m,int n)
{
    int i,j;
    int *element=a;
    for(i=0;i<m*n;i++)
    {
        for(j=i+1;j<m*n;j++)
        {
            if(*(element+i)<*(element+j))
            {
                int temp=*(element+i);
                *(element+i)=*(element+j);
                *(element+j)=temp;
            }
        }
    }
    printf("\n The largest number is %d\n The 2nd largest number is %d",a[0][0],a[0][1]);
    printf("\n The smallest number is %d\n The 2nd smallest number is %d",a[m-1][n-1],a[m-1][n-2]);
}
