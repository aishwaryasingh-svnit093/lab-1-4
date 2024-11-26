#include<stdio.h>
//PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.

int main(){
	
	int n,r,sum=0,temp;
	
	temp=n;
	printf("enter number: ");
	scanf("%d" , &n);
	
	while(n>0){
		r=n%10;
		sum=sum+r;
		n=n/10;
		
	}
	printf("sum of individual digits: %d" , sum);
return 0;	
}
