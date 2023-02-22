/* Write a program which reads a string and prints it in alphabetical order. For example, the
word WELCOME should be displayed as CEELMOW.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i,j;
    char string[50];
    printf("\n Enter a string :");
    gets(string);
    for(i=0;string[i]!='\0';i++)
    {
        for(j=i+1;string[j]!='\0';j++)
        {
            if(string[i]>string[j])
            {
                char temp=string[i];
                string[i]=string[j];
                string[j]=temp;
            }
        }
    }
    printf("\n String are alphabetical order %s",string);
    getch();
}
