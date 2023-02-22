 /*Write a program that finds the sum of each row and sum of each column of a matrix.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m,i,j;
    printf("\n Enter the row and column of square matrix :");
    scanf("%d %d",&m,&n);
    int matrix[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\n Enter the element to %d row and %d column :",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        int sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+matrix[i][j];
        }
        printf("\n Sum of %d row is %d",i+1,sum);
    }
    for(j=0;j<n;j++)
    {
        int sum=0;
        for(i=0;i<m;i++)
        {
            sum=sum+matrix[j][i];
        }
        printf("\n Sum of %d column is %d",j+1,sum);
    }
    getch();

}
