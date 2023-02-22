/*Write a program to compute the area of a triangle given its base and height.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float b,h;
    float area;
    printf("\n Enter the base and height of a triangle :");
    scanf("%f %f",&b,&h);
    area=(b*h)*1/2;
    printf("\n The area of the triangle is :%.2f",area);
    getch();
}
