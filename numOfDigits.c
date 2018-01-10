#include<stdio.h>
int main()
{
long n;
int count=0;
printf("enter an integer");
scanf("%ld",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("the number of digits are%d",count);
return 0;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
