#include<stdio.h>
int main(){
	
	int n ;
	printf("enter n : ");
	scanf("%d" , &n);
	
	int sum=0 ;
	int fact=0;
	
	for(int i=1 ; i<=n ; i=i+2){
		
		sum = sum+i;
	}
	printf("the sum of odd numbers : %d \n" , sum );
	
	for(int i=0 ; i<=n ; i=i+2){
		
		fact = fact+i ;
	}
	printf("the sum of even numbers  : %d " , fact );
	
	
	return 0;
}
