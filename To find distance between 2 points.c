//program to find distance between 2 points 
#include<stdio.h>
#include<math.h>
int main()
{float x1,x2,y1,y2;
printf("Enter the end points of line 1: ");
scanf("%f %f",&x1,&y1);
printf("Enter the end points of line 2: ");
scanf("%f %f",&x2,&y2);
float x=sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
printf("%1f",x);}