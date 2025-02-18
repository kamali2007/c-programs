#include<stdio.h>
int main()
{
 int n1=0,n2=1,n3;
 n3=n1+n2;
 printf("%d %d %d,n1,n2,n3");
 while(n3<=8)
{
int sum=n2+n3;
n2=n3;
n3=sum;
printf(" %d ", sum);

}

return 0;

}
