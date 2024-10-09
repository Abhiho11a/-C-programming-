#include<stdio.h>
int main(){int a,b;
char new[20];
char word[20];
printf("Enter word: ");
scanf("%s",&word);
printf("Enter slicing limit\n");
printf("slicing from: ");
scanf("%d",&a);
printf("slicing to: ");
scanf("%d",&b);
int j=0;
for(int i =a;i<b;i++,j++)
{
new[j]=word[i];
}
printf("word after slicing: ");
puts(new);}