/* Write a program using pointers to read an array of integers and print its elements in
reverse order.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("\n How many number you want to enter in a array :");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        printf("\n Enter %d element to the array :",i+1);
        scanf("%d",array+i);
    }
    printf("\n The element in array in reverse order are ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",*(array+i));
    }
    getch();

}
