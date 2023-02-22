/*Write a program to input a number and check whether it is prefect or not (A number is
called perfect if the sum of its divisors is equal to the number itself. For example, 28 is a perfect number
since 1+2+4+7+14=28).*/
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
     int i,n,num,sum=0;
     printf("\n Enter a number :");
     scanf("%d",&n);
     num=n;
     for(i=n/2;i>0;i--)
     {
         if(n%i==0)
         {
             sum=sum+i;
         }
     }
     if(num==sum)
     {
         printf("\n %d is a Perfect Number",num);
     }
     else
     {
         printf("\n %d is not a perfect Number",num);
     }
     getch();
 }
