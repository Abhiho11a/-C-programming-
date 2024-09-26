#include<stdio.h>
#include<math.h>
int main(){
float a,b; int cho;
printf("it's a simple calculator\n");
printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter choice>>");
scanf("%d",&cho);
printf("enter a: ");
scanf("%f",&a);
printf("enter b: ");
scanf("%f",&b);
switch(cho){
case 1:printf("%f",a+b);
break;
case 2:printf("%f",a-b);
break;
case 3:printf("%f",a*b);
break;
case 4:printf("%f",a/b);
break;
default: printf("Invalid choice");
}}