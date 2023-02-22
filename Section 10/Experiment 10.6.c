/*Using pointers, write a function that receives a character string and a character as
arguments and deletes all occurrence of this character in the string. The function should return the
corrected string with no holes.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void removeLetter(char *str, int len, char removeLetter)
{
    for(int i=0;i<len;i++)
    {
        if(*(str+i)==removeLetter)
        {
            for(int j=i;j<len-1;j++)
            {
                *(str+j) = *(str + j + 1);
            }
            *(str+len-1)='\0';
            len--;
        }
    }
}

void main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    int len = strlen(str);
    printf("Enter the character to remove: ");
    char ch;
    scanf("%c",&ch);

    removeLetter(&str[0], len, ch);
    printf("After removing letter \'%c\' result is: \"%s\"", ch, str);
    getch();
}
