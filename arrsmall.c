#include<stdio.h>
int main()
{
int i,n,a[n],small;
printf("enter the value of n:");
scanf("%d",&n);
printf("\n enter the array values:");
for(i=0;i<n;i++)
{

scanf("%d",&a[i]);
}
small=a[0];
for(i=0;i<n;i++)
{
if(small<a[i])
break;																																																																																																																																																																																																																																																																																																																																																																																													
else
small=a[i];
}printf("%d",small);
return 0;
}
