
#include<stdio.h>
int main()
{
 int low,high,mid,n,i,key,arr[100];
 printf("enter the number of element\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
 printf("enter value find");
 scanf("%d",&key);
 low=0;
 high=n-1;
 while(low<=high)
{
 mid=(low+high)/2;
 if(arr[mid]>key)
 {
low=mid+1;
 }
else if(arr[mid]==key)
 {
    printf("%d found at location %d.n", key,mid+1 );
    break;
 }
else
{
    high=mid-1;
}
 }
if(low>=high)
{
 printf("not found!%d  present in the list.n,key");

}
return 0;
}




