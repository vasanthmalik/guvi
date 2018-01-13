#include<stdio.h>
int main()
{
int a,b,i,num=1;
printf("enter the number and power");
scanf("%d%d",&a,&b);
for(i=0;i<b;i++)
{
num*=a;
}
printf("the result is%d",num);
return 0;
}
