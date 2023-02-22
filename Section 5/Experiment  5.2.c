/*Write a program to print the following structure:

 4 3 2 1 2 3 4
   3 2 1 2 3
     2 1 2
       1

*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col,space;
    for(row=4;row>=1;row--)
    {
        printf("\n\n");
        for(space=1;space<=5-row;space++)
        {
            printf("  ");
        }
        for(col=row;col>=1;col--)
        {
            printf("%d ",col);
        }
        for(col=2;col<=row;col++)
        {
            printf("%d ",col);
        }
    }
    getch();
}
