#include<stdio.h>
int main()
{
int a,b,i;
printf("enter the interval:");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
if(i%2==1)
printf("%d\t",i);
}
return 0;
}
