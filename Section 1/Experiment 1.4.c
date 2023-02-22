/*Write a program to enter the temperature in degree Celsius and display it in Fahrenheit
and vice-versa. [NOTE: C = (5.0/9.0) × (F - 32)].*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float c,f;
    printf("\n Enter temp in celsius :");
    scanf("%f",&c);
    f=c*(9.0/5.0)+32;
    printf("\n %f celsius in fahrenheit is %.2f f:",c,f);
    printf("\n Enter temp in fahrenheit :");
    scanf("%f",&f);
    c=(5.0/9.0)*(f-32);
    printf("\n %f fahrenheit in celcius is %.2f 'c",f,c);
    getch();
}
