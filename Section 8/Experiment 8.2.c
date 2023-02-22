/*Write a program that will count the number of occurrences of a specific character in a
given line of text.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,count=0;
    char string [50];
    char ch;
    printf("\n Enter a string :");
    gets(string);
    printf("\n Which character you want find :");
    scanf("%c",&ch);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]==ch)
        {
            count++;
        }
    }
    printf("\n The character %c occurrences in string is %d",ch,count);
    getch();

}
