/* Write a program to convert a sparse matrix given in regular form to 3-tuple form.*/
#include<stdio.h>
#include<conio.h>
#define ROW 4
#define COL 5 //Global variable for col size in user define function
void conVmatrix(int a[][COL],int,int);//Function declaration
void main()
{
    int m[ROW][COL];
    int i,j;
    //printf("\n Enter a (4x5) Matrix :");
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("\n Enter element to sparse matrix %d row %d col :",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }
    printf("\n The Sparse Matrix is :");
    for(i=0; i<ROW; i++)
    {
        printf("\n\n");
        for(j=0; j<COL; j++)
        {
            printf("%5d",m[i][j]);
        }
    }
    conVmatrix(m,ROW,COL);
    getch();

}
void conVmatrix (int a[ROW][COL],int m,int n)//Function defining
{
    int i,j,r=1,nonzeroelement=0;
    //count total no of nonzero element
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j]!=0)
                nonzeroelement++;
        }
    }
    int p=nonzeroelement+1;
    //No of row in sparse matrix is more than 1 of non zero element
    //No of column is always 3
    int smatrix [p][3];
    smatrix[0][0]=m;
    smatrix[0][1]=n;
    smatrix[0][2]=nonzeroelement;
    //Taking element from sparse matrix to 3 tuple from
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j] !=0)
            {
                smatrix[r][0]=i;
                smatrix[r][1]=j;
                smatrix[r][2]=a[i][j];
                r++;
            }
        }
    }
    printf("\n The sparse Matrix in 3 tuple from is :");
    for(i=0; i<p; i++)
    {
        printf("\n\n");
        for(j=0; j<3; j++)
        {
            printf("%5d",smatrix[i][j]);
        }
    }

}

