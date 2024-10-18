//program to check the given number is a prime number or not
#include<stdio.h>


int main()
{
int n;
printf("Enter number: ");
scanf("%d",&n);

int ans=1;
for(int i=2;i<n;i++)
{
 if(n%i==0) 
 {ans=0;}
}

if(ans==1)
 {
  printf("%d is prime number",n);
 }
else
 {
  printf("%d is not a prime number",n);
 }
}