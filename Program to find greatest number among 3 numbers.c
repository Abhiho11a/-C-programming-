#include <stdio.h>
#include<math.h>
int main()
{
int a,b,c=0; int greater;
printf("Enter 1st number:");
scanf("%d",&a);
printf("Enter 2nd number:");
scanf("%d",&b);
printf("Enter 3rd number:");
scanf("%d",&c);
if(a>b && a>c)
{
greater=a;
}
else if(b>c && b>a)
{
greater=b;
}
else
{
greater=c;
}
printf("Greatest number among %d,%d,%d is %d",a,b,c,greater );
}
    