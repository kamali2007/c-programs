#include<stdio.h>
 int main()
 {
   int n,digit,sum=0;//n=145
   printf("enter the number");
   scanf("%d",&n);
   while("n!=0")
   {
   digit=n%10;
   sum=sum+digit;
   n=n/10;//n=14
   }
 printf("sum of digit %d",sum);
 return 0;


 }
