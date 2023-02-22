/*Rewrite the program mentioned in Experiment 2.2. However, rename the data types
‘float’ to ‘Decimal’ and ‘int’ to ‘integer’ by using typedef statement.
Experiment 2.2: Write a program that takes as input, the principal, rate of interest, and time, and then
calculates the simple and compound interest.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    typedef float Decimal;
    typedef int integer;
    Decimal P,R,SI,CI;
    integer T;
    printf("\nEnter Principal Amount :");
    scanf("%f",&P);
    printf("\nEnter rate of interest :");
    scanf("%f",&R);
    printf("\nEnter the time duration in Year :");
    scanf("%d",&T);
    SI=(P*R*T)/100;
    printf("\nSimple Interest is %.2f",SI);
    CI=P*(pow(1+(R/100),T));
    printf("\nCompound Interest is %.2f",CI);
    getch();
}
