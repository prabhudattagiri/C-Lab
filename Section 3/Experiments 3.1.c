/*Write a program to compute the area of a triangle given its three sides.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,b,c;
    float s,area;
    printf("\nEnter three side of a triangle :");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area=pow((s*(s-a)*(s-b)*(s-c)),0.5);
    printf("\nArea of the triangle is %.2f",area);
    getch();
}
