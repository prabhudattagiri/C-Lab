/*Write a program that requests two float type numbers from the user and then divides the
1st number by the 2nd and displays the result along with the numbers.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float n1,n2;
    printf("\nEnter 1st Number :");
    scanf("%f",&n1);
    printf("\nEnter 2nd Number :");
    scanf("%f",&n2);
    printf("\n %.2f / %.2f =%.2f",n1,n2,n1/n2);
    getch();

}
