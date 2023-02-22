/*Write a program to find out the length of a string without using the strlen() function.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char string[100];
    int i,count=0;
    printf("\n Enter a string :");
    gets(string);
    for(i=0;string[i]!='\0';i++)
    {
        count++;
    }
    printf("\n The length of the string is %d",count);
    getch();
}
