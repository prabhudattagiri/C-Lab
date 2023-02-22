/*Write a program that takes the radius of a circle and displays its area and perimeter.*/
#include<stdio.h>
#include<conio.h>
#define PI 3.141
void main()
{
    float r,perimeter;
    printf("\n Enter the radius of a circle :");
    scanf("%f",&r);
    perimeter=2*PI*r;
    printf("\n Perimeter of the circle is %.2f",perimeter);
    getch();
}
