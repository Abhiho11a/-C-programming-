//To find largest among 3 numbers 
 #include <stdio.h>
 int main()
  {int a,b,c;
  printf("Enter 1st num: ");
  scanf("%d",&a);
  printf("Enter 2nd num: ");
  scanf("%d",&b);
  printf("Enter 3rd num: ");
  scanf("%d",&c);
  if(a>b && a>c)
  {printf("%d is largest",a);}
  else if(b>c && b>a)
  {printf("%d is largest",b);}
  else
  {printf("%d is largest",c);}
  }