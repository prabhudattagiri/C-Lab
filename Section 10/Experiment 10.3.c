/* Use recursive function calls to evaluate the following series:
x - (x^3/3!) + (x^5/5!) - (x^7/7!) + ......*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

long Factorial(int value)
{
    if(value==1)
        return 1;
    else
        return value * Factorial(value-1);
}

float calculate(int value)
{
    float result=0;
    for(int i=0;i<=value/2;i++)
    {
        if(i%2 == 0)
        {
            result=result + ( pow(value, ( (2*i) + 1 )) / Factorial(2*i+1));
        }
        else
        {
            result=result - ( pow(value, ( (2*i) + 1 )) / Factorial(2*i+1));
        }
    }
    return result;
}

void main()
{
    int x;
    float result;
    printf("\n Enter the value of x : ");
    scanf("%d", &x);
    result = calculate(x);
    printf("\n The result is: %.3f",result);
    getch();

}
