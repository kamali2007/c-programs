#include<stdio.h>
int main()
{int a[10][10],transpose[10][10],r,c;
printf("enter rows and columns:");
scanf("%d %d",&r,&c);
printf ("enter the matrix");
for(int i=0;i<r;i++)
{
 for(int j=0;j<c;j++)
{ printf("%d",a[i][j]);
}
printf("\n");
}
for(int i=0;i<r;i++)
{for(int j=0;j<r;j++)
{transpose[j][i]=a[i][j];}
}
printf("\n transpose of the matrix");
for(int i=0;i<r;i++)
{for(int j=0;j<c;j++);{printf("%d",transpose);
}}

return 0;

}
