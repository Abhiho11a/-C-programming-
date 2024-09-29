#include<stdio.h>
#include<math.h>
int main(){
int amt,note500,note200,note100,note50,note20,note10,note5;
printf("Enter amount:\n");
scanf("%d",&amt);
note500=amt/500;
note200=(amt%500)/200;
note100=((amt%500)%200)/100;
note50=(((amt%500)%200)%100)/50;
note20=((((amt%500)%200)%100)%50)/20;
note10=(((((amt%500)%200)%100)%50)%20)/10;
note5=((((((amt%500)%200)%100)%50)%20)%10)/5;
printf("500s note=%d\n",note500);
printf("200s note=%d\n",note200);
printf("100s note=%d\n",note100);
printf("50s note=%d\n",note50);
printf("20s note=%d\n",note20);
printf("10s note=%d\n",note10);
printf("5s note=%d\n",note5);
}