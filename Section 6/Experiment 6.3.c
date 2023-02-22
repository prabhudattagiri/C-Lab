/*Write a program to read ‘n’ characters and then delete the duplicate characters*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k;
    printf("\n How many number you want to enter :");
    scanf("%d",&n);
    char array[n];
    for(i=0;i<n;i++)
    {
        printf("\n Enter the character to the array :");
        array[i]=getche();
    }
     for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]==array[j])
            {
                for(k=j;k<n;k++)
                {
                    array[k]=array[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("\n After delete duplicate character :");
    for(i=0;i<n;i++)
    {
        printf("%c ",array[i]);
    }
    getch();
}
