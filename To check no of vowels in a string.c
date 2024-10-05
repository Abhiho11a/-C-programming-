//program to check no of vowels in a string
#include<stdio.h>
int main(){
char word[20];
printf("Enter a word: ");
scanf("%s",&word);
int n=strlen(word);
int vow=0;
for(int i=0;i<n;i++)
{
if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
{vow++;}}
printf("Vowels in '%s' is %d",word,vow);
}