#include<stdio.h>
int main(){
int num,fact=1,i;
printf("enter the number to find factorial:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
fact=fact*i;
}
printf("\n the factorial of the number is %d",fact);
return 0;
}
