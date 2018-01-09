#include<stdio.h>
int main()
{
char ch;
printf("enter the character");
scanf("%c",&ch);
isVowel=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
if(isVowel)
printf("it is vowel");
else
printf("it is a consonent");
return 0;
}
