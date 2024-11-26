#include<stdio.h>
int main(){
	
	int n,a;
	printf("enter a number : ");
	scanf("%d" , &n);
	
	//0 and 1 are not prime numbers 
	//a=1 means not a prime number 
	//a=0 means a prime number is entered
	
	if (n==0 || n==1)
	a = 1;
	
	for( int i=2 ; i<n  ; i++){
		if(n%i==0){
			a=1;
			break;
		}
		
	}
	
	if (a==1){
		printf("%d is not a prime number" , n);
	}
	else{
		printf("%d is a prime number " , n);
	}
	return 0;
}
