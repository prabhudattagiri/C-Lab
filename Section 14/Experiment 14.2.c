/*Write a program to find the transpose of a sparse matrix given in 3-tuple from.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int row, col, count = 0;
    printf("Enter the Rows and cols of a nomral matrix:");
    scanf("%d %d", &row, &col);

    int matrix[row][col];
    int i,j;
    printf("Enter the values for matrix[%d][%d]\n", row, col);
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf("Enter Element[%d][%d]:- ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix elements are: \n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf("%d ", matrix[i][j]);
            if (matrix[i][j] != 0)
            {
                count++;
            }
        }
        printf("\n");
    }
    int sprase[count][3];
    int r= 1;
    sprase[0][0] =row;
    sprase[0][1] =col;
    sprase[0][2] =count;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (matrix[i][j] != 0)
            {
                sprase[r][0] = i;
                sprase[r][1] = j;
                sprase[r][2] = matrix[i][j];
                r++;
            }
        }
    }
    printf("------------------------------------------\n");
    printf("Sprase of the matrix is: \n");
    for (i=0;i<=count;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d ",sprase[i][j]);
        }
        printf("\n");
    }
    printf("------------------------------------------\n");
    printf("Transpose of the sprase matrix is: \n");
    for (j=0;j<3;j++)
    {
        for (i=0;i<=count;i++)
        {
            printf("%d ",sprase[i][j]);
        }
        printf("\n");
    }

    getch();
}
