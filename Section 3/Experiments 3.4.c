/*Write a program to input a character and check whether it is a vowel or consonant using
conditional operator. [Hint: compare against the ASCII range.]*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int c;
   char ch;
   printf("\nEnter a character :");
   scanf("%c",&ch);
   c=ch;
   (c==65||c==69||c==73||c==79||c==85||c==97||c==101||c==105||c==111||c==117)?printf("\nCharacter is Vowel"):printf("\nCharacter is Consonant");
   getch();
}
