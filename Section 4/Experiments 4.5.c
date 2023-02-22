/* An electricity board charges the following rates for the use of electricity.
− For the first 200 units: 80 paise per unit
− For the next 100 units: Rs. 1.30 per unit
− Beyond 300 units: Rs. 2.00 per unit
All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more that Rs. 400, then
an additional surcharge of 15% of total amount is charged. Write a program to read the name of a
consumer and the number of units consumed and print the charge with his/her name. */
#include<stdio.h>
#include<conio.h>
void main()
{
    float unit,charge;
    char name [20];
    printf("\n Enter Consumer Name :");
    gets(name);
    printf("\n Enter Unit Consumed by consumer :");
    scanf("%f",&unit);
    //Minimum Meter Charge 100
    if(unit<=200)
    {
        charge=100+(unit*.80);
    }
    else if(unit<=300)
    {
        charge=260+(unit-200)*1.30;
    }
    else if(unit>=400)
    {
        charge=390+(unit-300)*2.0;
    }
    else

    if(charge>400)
    {
        charge+=charge*0.15;
    }
    printf("\n Consumer Name is %s",name);
    printf("\n Total Unit consumption is %.2f and Electric Bill charge is %.2f",unit,charge);
    getch();
}
