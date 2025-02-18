#include<stdio.h>
int main()
{
 int a[10][10],transpose[10][10]r,c;
 printf("enter rows and columns:");
 scanf ("%d%d",&r,c);
 int a[r][c],T[r][c]
 printf("\n enter elements of matrix:\n");
 for(i=o;i<r;i++)
 {
  for(j=o;j<c;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
  for(i=o;i<r;i++)
  {for(j=0;j<c;j++){printf("%d",a [i][j]);}
  printf("\n");}
  for(i=0;i<r;i++)
  {for(j=0;j<c;j++){T[i][j];=a[i][j]}
  }
printf("\ntranpose of the matrix");
for(i=0;i<r;i++)
{for(j=0;j<c;j++){printf("%d",transpose);
}}
return 0;

}
