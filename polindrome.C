#include<stdio.h>
int main()
{
int number,originalnumber,reminder,result=0;
printf("Enter the number:\n",number);
scanf("%d",&number);
originalnumber=number;
while(originalnumber!=0)
{
reminder=originalnumber%10;
result+=reminder*reminder*reminder;
originalnumber/=10;
}
if(result==0)
printf("%d is an armstrong number!!!!\n");
else
printf("%d is not an armstrong number!!!");
return 0;
}
