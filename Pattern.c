#include<stdio.h>
int main(){
int row=1;int n;
printf("N: ");
scanf("%d",&n);
while(row<=n)
{
int col=1;
while(col<=n)
{
printf("* ");
col++;
}
printf("\n");
row++;}}