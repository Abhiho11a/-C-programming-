//Program to swap two numbers 
#include<stdio.h>
void swap(int a,int b);
int main()
{int a,b;
printf("Enter a = ");
scanf("%d",&a);
printf("Enter b = ");
scanf("%d",&b);
swap(a,b);
}
//call by value
void swap(int a,int b){
int t = a;
a=b;
b=t;
printf("Numbers after swapping are:\na = %d \nb = %d ",a,b);}