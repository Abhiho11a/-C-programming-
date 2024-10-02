#include<stdio.h>
int main(){
int hrs,sal,amt;
sal=amt=hrs=0;
char name[20];
printf("ENTER EMPLOYEE'S NAME: ");
scanf("%s",name);
printf("Enter the number of hrs %s worked: ",name);
scanf("%d",&hrs);
printf("Enter the amount that %s should be paid per an hour: ",name);
scanf("%d",&amt);
sal=hrs*amt;
printf("Salary of %s is %d",name,sal);
}