#include<stdio.h>
int main(){
	
	int i,n,sum=0;
	printf("enter a number which contains maximum 10 digits : ");
	scanf("%d" , &n);
	
	for(i=1000000000;i>0;i/=10)
	{
		sum=n/i +sum;
		n=n%i;
	}
	 if (sum>=10){
	 n=sum , sum=0;
	 for(i=1000000000;i>0;i/=10)
	 {
	 	sum=n/i +sum;
	 	n%i;
	 }
	 }
	
	printf("sum of all digits =%d" , sum);
	
	
	return 0;
}
