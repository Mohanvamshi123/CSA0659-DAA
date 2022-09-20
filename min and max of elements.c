#include<stdio.h>
int main()
{
int a[100],i,n,min,max;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=max=a[0];
for(i=0;i<n;i++)
{
if(min>a[i])
  min=a[i];
if(max<a[i])
  max=a[i];
  }
  printf("min of array is %d",min);

  printf("max of arrar is %d",max);
  return 0;
  }

