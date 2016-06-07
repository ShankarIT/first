#include<stdio.h>
#include<conio.h>
int main()
{
int num;
scanf("%d",&num);
if(num<0)
printf("The given num is negative");
else if(num>0)
printf("The given num is positive");
else
printf("The given num is zero");
return 0;
}
