//To print sum of even numbers from 1 to a number given by the user
#include<stdio.h>
int main()
{int i,n,sum=0;
printf("Enter a number: ");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(i%2==0)
{
sum=sum+i;
}
else
{
continue;
}}
printf("SUM OF EVEN NUMBERS FROM 0 TO %d is = %d",n,sum);
}