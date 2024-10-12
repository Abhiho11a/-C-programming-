//program to reverse an array without using function call
#include<stdio.h> 
int main(){int n;int arr[20];
printf("Enter number of elements in an array: ");
scanf("%d",&n);
printf("Enter array elements:\n");
for(int i=0;i<n;i++)
{printf("arr[%d] = ",i);
scanf("%d",&arr[i]);
}
for(int i=0;i<n/2;i++)
{int temp=arr[i];
arr[i]=arr[n-i-1];
arr[n-i-1]=temp;
}
printf("Array elements after reversing:\n");
for(int i=0;i<n;i++){printf("%d\t",arr[i]);
}
}