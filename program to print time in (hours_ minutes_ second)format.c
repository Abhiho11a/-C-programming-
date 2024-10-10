
#include<stdio.h>
#include<math.h>
int main()
{int h,m,s,sec;
h=m=s=sec=0;
printf("Enter seconds: ");
scanf("%d",&sec);
h=sec/3600;
m=(sec-h*3600)/60;
s=(sec-(h*3600) -(m*60))%60;
printf("h:m:s\n");
printf("%d:%d:%d",h,m,s );}