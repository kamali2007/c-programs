#include<stdio.h>
int main()
{
int a;
printf("enter value for a:");
scanf("%d",&a);
int *ptr;
ptr=&a;
int **ptr1;
ptr1=&ptr;
printf("\n%d\n",a);
printf("%u\n",&a);
printf("%u\n",ptr);
printf("%u\n",*ptr);
printf("%u\n",*(&a));
printf("%u\n",&ptr);
printf("%u\n",ptr1);
printf("%d\n",**ptr1);
return 0;
}
