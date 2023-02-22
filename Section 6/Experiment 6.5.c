/*Write a program to read ‘n’ numbers and find the frequency of occurrence of each
number.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter how many numbers you want to insert : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter %d number : ",i+1);
        scanf("%d",&a[i]);
    }
    int b[n];
    for(int i=0; i<n; i++)
        b[i]=0;
    for(int i=0; i<n; i++)
    {
        int c=1;
        for(int j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                c++;
                b[j]=-1;
            }
        }
        if(b[i]!=-1)
        {
            b[i]=c;
        }
    }
    printf("\n\n     Element    |    Frequency");
    printf("\n-------------------------------");
    for(int i=0; i<n; i++)
    {
        if(b[i]>0)
        {
            printf("\n\t%d\t|\t%d",a[i],b[i]);
        }
    }
    getch();
}
