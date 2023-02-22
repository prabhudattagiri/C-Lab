/*Write a program to find out the HCF and LCM of two numbers.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,hcf,lcm,l,s,i;
    //l=large and s=small number
    printf("\n Enter two Number to find HCF & LCM :");
    scanf("%d %d",&num1,&num2);
    l=num1<num2?num2:num1;
    //lcm
    for(i=l;i<=num1*num2;i++)
    {
        if(i%num1==0&&i%num2==0)
        {
            lcm=i;
            break;
        }
    }
    //hcf
    for(i=l;i>=1;i--)
    {
        if(num1%i==0&&num2%i==0)
        {
            hcf=i;
            break;
        }
    }
    printf("\n LCM of %d and %d is %d and HCF is %d",num1,num2,lcm,hcf);
    getch();

}
