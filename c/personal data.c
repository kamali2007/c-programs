#include<stdio.h>
int main()
{
 char name[50],address[60];
 int age;
printf("Enter your name:");
scanf("%s",name);
printf("Enter your age:");
scanf("%d",&age);
printf("Enter your address:");
scanf(" %[^\n]",address);

printf("\n =============== BIO-DATA =============== \n");
printf("\n");
printf("Name    : %s\n",name);
printf("Age     : %d\n",age);
printf("Address : %s\n",address);
return 0;
}


