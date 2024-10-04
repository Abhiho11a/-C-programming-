#include<stdio.h>
int sum(int n);
int main()
{int N,x,i;
printf("Enter N to print sum from 1 to N: ");
scanf("%d",&N);
printf("Sum from 1 to %d is %d\n",N,sum(N)); 
for(int i=1;i<=N;i++)
{printf("%d\n",i);
}
}
int sum(int n){
if(n==1){return 1;}
int sumNm1=sum(n-1);
int sumN=sumNm1+n;
return sumN;}


       //---------------OR---------------

/*#include<stdio.h>
int main(){
int N;int sum=0;

printf("Enter N to print sum from 1 to N: ");
scanf("%d",&N);
for(int i=1;i<=N;i++){
sum=sum+i;
printf("%d\n",i);
}
printf("sum from 1 to %d is %d",N,sum);

}*/