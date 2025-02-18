#include<stdio.h>
int main()
{
    int nums[5];
    printf("\n enter array elements; ");
    for(int i=0;i<5;i++)
    {
        scanf("%d\n",&nums[i]);
    }
    printf("accessing array elements after dynamic initialization");
    for(int i=5;i>0;i--)
    {
        printf ("%d\n",nums[i]);
    }
    return 0;
}
