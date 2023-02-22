  /*Write a program that takes as input, the principal, rate of interest, and time, and then
calculates the simple and compound interest.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float P,R,SI,CI;
    float T;
    printf("\nEnter the Principal Amount :");
    scanf("%f",&P);
    printf("\nEnter the Rate of interest :");
    scanf("%f",&R);
    printf("\nEnter the Time Duration in Year :");
    scanf("%f",&T);
    SI=(P*R*T)/100;
    printf("\nSimple Interest is %.3f ",SI);
    CI=P*(pow(1+(R/100),T));
    printf("\nCompound Interest is %.3f ",CI);
    getch();
}
