#include<stdio.h>
void main()
{
int i,a=0,b=1,n,count=0,arr[100],j,next=0,c;
printf("Enter the upper limit:");
scanf("%d",&n);
printf("Enter the numbers into array:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<99;i++)
{
for(j=0;j<n;j++)
{
if(arr[j]==next)
{
count=count+1;
}
}
next=a+b;
a=b;
b=next;
}
printf("%d",count);
}
