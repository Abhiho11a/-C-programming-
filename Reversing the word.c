//program to reverse a word 
#include<stdio.h>
int main(){
char word[20];
int N;
printf("ENTER THE NUMBER OF LETTERS IN A WORD: ");
scanf("%d",&N);
printf("Enter a word: ");
for(int i=0;i<=N;i++){
scanf("%c",&word[i]);}
for(int i=0;i<=N/2;i++)
{
int temp=word[i];
word[i]=word[N-i];
word[N-i]=temp;
}for(int i=0;i<N;i++){
printf("%c",word[i]);}}
