#include<stdio.h>
int main()
{
int num,rem=0,sum=0,cube,temp;
printf("enter the number");
scanf("%d",&num);
num=temp;
while(num!=0)
{
rem=num%10;
cube=pow(num,rem);
sum=sum+cube;
num=num/10;
}
if(sum==temp)
{
printf("it is armstrong number");
}
else
{
printf("not an armstrong number");
}
}
