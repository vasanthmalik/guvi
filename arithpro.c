#include<stdio.h>
int main(){
int a,d,n,i,tn;int sum=0;
printf("enter the starting number:");
scanf("%d",&a);
printf("\nenter the difference of each number:");
scanf("%d",&d);
printf("\nenter the total number of terms:");
scanf("%d",&n);
sum=n*(2*(a+(n-1)*d))/2;
tn=a+(n-1)*d;
printf("\n the A.P is:");
for(i=a;i<=tn;i=i+d)
{
if(i!=tn)
{
printf("%d +",i);}
else
{
printf("%d=%d",i,sum);
}}
return 0;
}
