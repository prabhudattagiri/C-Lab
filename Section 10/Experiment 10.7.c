/*Write a function using pointers to add two matrices and return the resultant matrix. Use
this function within the main function to add two matrices.*/
#include<stdio.h>
#include<conio.h>
void matrixAddition(int* matrix1,int* matrix2, int* resultant, int row, int column)
{
    for(int i = 0; i < row*column; i++)
    {
        *(resultant+i) = *(matrix1+i) + *(matrix2+i);
    }

}

void main()
{
    int row, column;
    printf("Enter the rows and column of the both the Matrix: ");
    scanf("%d %d",  &row, &column);

    int matrix1[row][column], matrix2[row][column], resultant[row][column];

    printf("Enter the elements of the First Matrix: \n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("Enter the element[%d][%d]: ",i+1,j+1 );
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second Matrix: \n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("Enter the element[%d][%d]: ",i+1,j+1 );
            scanf("%d",&matrix2[i][j]);
        }
    }

    matrixAddition(&matrix1[0][0], &matrix2[0][0], &resultant[0][0], row, column);

    printf("The result of Addition of the two matrix is: \n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("%d ",resultant[i][j]);
        }
        printf("\n");
    }
    getch();
}
