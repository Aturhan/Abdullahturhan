#include<stdio.h>
void main()
{
char s[10];
int count=0,i;
printf("The length of the string should be less than or equal to 10:\n");
printf("Enter the string of length in lowercase:\n");
scanf("%s",s);
for(i=0;i<10;i++)
{
if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
{
count++;
}
}
printf("The number of vowels in the string are: %d",count);
}

