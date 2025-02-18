#include<stdio.h>
int main()
{
  int nums[5][4];
  printf("\n enter array elements:");
  for(int i=0;i<5;i++)//row
  {for(int j=0;j<4;j++)//column
  {scanf("%d",&nums[i][j]);}
  }
  printf("accessing array elements after dynamic initialization");
  for(int i=0;i<5;i++)
{
for(int j=0;j<4;j++)
{printf("%d\t",nums[i][j]);
}
printf("\n");
}
return 0;
}







