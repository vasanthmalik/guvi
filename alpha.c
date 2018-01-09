#include<stdio.h>
int main()
{
char ch;
printf("enter your character");
scanf("%c",&ch);
if((ch>'a'&&ch<'z')||(ch>'A'&&ch<'Z'))
printf("it is an alphabet");
else
printf("is not an alphabet");
return 0;
}
