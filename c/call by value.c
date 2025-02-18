#include<stdio.h>
void swap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
}
int main()
{
int a,b;
a=10;
b=20;
printf("%d\t%d",a,b);
scanf("&a,&b");
swap(a,b);
printf("%d\t%d",a,b);

}
