#include<stdio.h>
int main(){
	
	int n;
	int f=0;
	int s=1;
	int sum;
	
	printf("how many 'n' numbers you want to see in fibonacci series: " );
	scanf("%d" , &n);
	
	printf("the fibonacci series of %d numbers are as follows: \n" , n);
	
	for(int i=1; i<=n; i++){
		
		printf("%d \n" , f);
		sum = f+s;
		f=s;
		s=sum;
		
	}
	
	
	
	
	
	return 0;
}
