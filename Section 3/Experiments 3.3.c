/*Write a program to input a character and check whether it is in upper case or lower case
using conditional operator. [Hint: compare against the ASCII range.]*/
#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    int chi;
    printf("\nEnter a Character :");
    scanf("%c",&ch);
    chi=ch;
    (chi>=65&&chi<=90)?printf("\nCharacter is in Uppercase"):((chi>=97&&chi<=122)?printf("\nCharacter is in Lowercase"):printf("\nInput is not a charcter"));
    getch();
}
