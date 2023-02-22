/*Write a program that finds the sum of diagonal elements of a square matrix.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    printf("\n Enter the row and column of matrix :");
    scanf("%d",&n);
    int matrix [n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\n Enter the element to %d row and %d column :",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    int sum=0;
    for(i=0; i<n; i++)
    {

        for(j=0; j<n; j++)
        {
            if(matrix[i][j]==matrix[j][i])
            {
                sum=sum+matrix[i][j];
            }
        }
    }
    printf("\n Sum of diagonal element is %d",sum);
    getch();
}
