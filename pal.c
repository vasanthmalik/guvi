#include<stdio.h>
int main()
{
int num,rev=0,rem,n;
printf("enter the number to check:");
scanf("%d",&num);
num=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n/=10;
}
if(num==rev)
printf("it is palindrome");
else
printf("not a palindrome");
return 0;
}
