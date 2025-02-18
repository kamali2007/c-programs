/*//swap 2 numbers using 3rd variable
int main()
{
    int a=3;
    int b=2;
    int c;
    c=a;
    a=b;
    b=c;
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}*///swaping of 2 variable without using temporary variable
/*
int main()
{
    int x=10;
    int y=20;
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d\n",x);
    printf("%d\n",y);
    return 0;
}*/// convert temperature in celcius into farenheit
/*
int main()
{
    float s;
    float ft;
    printf("enter the celcius");
    scanf("%f",&s);
    ft=(1.8*s)+32;
    printf("farenheit=%f",ft);
    return 0;
}*/ //qutient and remainder
/*
int main()
{
    int a,b;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    printf("qutient=%d",a/b);
    printf("remainder=%d",a%b);
    return 0;
}*/// sum &average of three no
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    printf("sum=%d",a+b+c);
    d=(a+b+c)/3;
    printf("average=%d",d);
return 0;}
