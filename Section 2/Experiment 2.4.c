/*Write a program to read the price of an item in decimal form (like 15.95) and print the
output in paise (like 1595 paise).*/
#include<stdio.h>
#include<conio.h>
void main()
{
    float P;
    printf("\nEnter the price of the item :");
    scanf("%f",&P);
    printf("\nPrice of the item is %.0f paise",P*100);
    getch();
}
