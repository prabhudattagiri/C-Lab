/*Write a program using function to take a string as input and then convert all lowercase
characters to its uppercase equivalent.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void uppercase (char string[])
{
    strupr(string);
    printf("\n The Enter string in uppercase is %s",string);
}
void main()
{
    char string[30];
    printf("\n Enter a string is lower case :");
    gets(string);
    uppercase(string);
    getch();
}
