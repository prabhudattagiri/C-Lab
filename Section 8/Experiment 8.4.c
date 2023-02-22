/*Write a program that reads two strings and then compares them without using the
strcmp() function.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    int l1,l2,i;
    char str1[30],str2[30];
    printf("\n Enter 1st string :");
    gets(str1);
    printf("\n Enter 2nd string :");
    gets(str2);
    l1=strlen(str1);
    l2=strlen(str2);
    if(l1==l2)
    {
        for(i=0;i<l1;i++)
        {
            if(str1[i]!=str2[i])
            {
                printf("\n The string are not identical");
                exit(0);
            }
        }
        printf("\n The string are identical");
    }
    else
    {
        printf("\n The string are not same");
    }
}
