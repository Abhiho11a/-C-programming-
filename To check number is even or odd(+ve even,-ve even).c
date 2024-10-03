#include<stdio.h>
#include<math.h>
int main(){
int num;
printf("Enter number:\n");
scanf("%d",&num);
if(num<0 && num%2==0)
{printf("negative even");}
if(num<0 && num%2!=0)
{ printf("negative odd");}
if(num>0 &&num%2==0)
{printf("positive even");}
if(num>0 && num%2!=0)
{printf("positive odd");}}
