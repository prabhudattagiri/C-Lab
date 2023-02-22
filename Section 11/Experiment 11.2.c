/* Write a program to create a structure COMPLEX to represent a complex number. Using
the structure write a program to add two complex numbers and display their sum.*/
#include<stdio.h>
#include<conio.h>
struct complex
{
    int realpart;
    int imaginarypart;
};
void main()
{
    struct complex cnum1,cnum2,result;
    printf("\n Enter real number to 1st complex number :");
    scanf("%d",&cnum1.realpart);
    printf("\n Enter imaginary number to 1st complex number :");
    scanf("%d",&cnum1.imaginarypart);
    printf("\n Enter real number to 2nd complex number :");
    scanf("%d",&cnum2.realpart);
    printf("\n Enter imaginary number to 2nd complex number :");
    scanf("%d",&cnum2.imaginarypart);
    result.realpart=cnum1.realpart+cnum2.realpart;
    result.imaginarypart=cnum1.imaginarypart+cnum2.imaginarypart;
    printf("\n Sum of two complex Number is %d+%di",result.realpart,result.imaginarypart);
    getch();
}
