#include<stdio.h>
int main()
{
int i,n,a[n],lar;
printf("enter the value of n:");
scanf("%d",&n);
printf("\n enter the array values:");
for(i=0;i<n;i++)
{

scanf("%d",&a[i]);
}
lar=a[0];
for(i=0;i<n;i++)
{
if(lar>a[i])
break;																																																																																																																																																																																																																																																																																																																																																																																													
else
lar=a[i];
}printf("%d",lar);
return 0;
}
