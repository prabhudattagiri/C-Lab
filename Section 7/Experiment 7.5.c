/*Write a menu-based program that takes two matrixes A and B as input and displays the
results of the following operations based on user’s choice.
1. A + B
2. A - B
3. B - A
4. A × B
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    int r1,c1,r2,c2,r3,c3;
    int c[r3][c3];
    int sum=0;
    //for matrix A
    printf("\n Enter the row and column to Matrix A :");
    scanf("%d %d",&r1,&c1);
    int a[r1][c1];
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("\n Enter the element to %d row and %d col :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    //for matrix B
    printf("\n Enter the row and column to Matrix A :");
    scanf("%d %d",&r2,&c2);
    int b[r2][c2];
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("\n Enter the element to %d row and %d col :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n 1. A + B \n 2. A - B\n 3. B - A \n 4. A × B");
    int choice;
    printf("\n Enter your choice (1-4) :");
    scanf("%d",&choice);
    switch(choice)
    {
    //addition
    case 1:
        if(r1==r2 && c1==c2)
        {
            for(i=0; i<r1; i++)
            {
                for(j=0; j<c1; j++)
                {
                    c[i][j]=a[i][j]+b[i][j];
                }
            }
            printf("A+B\n");
            for(i=0; i<r1; i++)
            {
                for(j=0; j<c1; j++)
                {
                    printf("%d ",c[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("Error!\n");
        }
        break;
    //subtraction
    case 2:
        if(r1==r2 && c1==c2)
        {
            for(i=0; i<r1; i++)
            {
                for(j=0; j<c1; j++)
                {
                    c[i][j]=a[i][j]-b[i][j];
                }
            }
            printf("A-B\n");
            for(i=0; i<r1; i++)
            {
                for(j=0; j<c1; j++)
                {
                    printf("%d ",c[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("Error!\n");
        }
        break;
    //subtraction (B-A)
    case 3:
        if(r1==r2 && c1==c2)
        {
            for(i=0; i<r1; i++)
            {
                for(j=0; j<c1; j++)
                {
                    c[i][j]=b[i][j]-a[i][j];
                }
            }
            printf("B-A\n");
            for(i=0; i<r1; i++)
            {
                for(j=0; j<c1; j++)
                {
                    printf("%d ",c[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("Error!\n");
        }
        break;
    //matrix multiplication
    case 4:
        if(c1==r2)
        {
            for(i=0; i<r1; i++)
            {
                for(j=0; j<c2; j++)
                {
                    for(k=0; k<r2; k++)
                    {
                        sum=sum+a[i][k]*b[k][j];
                    }
                    c[i][j]=sum;
                    sum=0;
                }
            }
        }
        printf("A*B\n");
        //printing result
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                printf("%d     ",c[i][j]);
            }
            printf("\n");
        }
        break;
    default:
    {
        printf("Wrong Option\n");
    }

    }
    getch();
}
