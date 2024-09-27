#include<stdio.h>
#include<math.h>
int main()
{
int i,x,n;
printf("ENTER A NUMBER TO PRINT TABLES: ");
scanf("%d",&n);
printf("UPTO WHICH NUMBER TABLES MUST BE PRINTED: ");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
printf("%d*%d=%d \n",n,i,n*i);
}
return 0;
}