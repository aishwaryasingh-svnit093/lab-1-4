#include<stdio.h>
int main(){
	
	int p;
	printf("enter p");
	scanf("%d" , &p);
	
	int r;
	printf("enter r");
	scanf("%d" , &r);
	
	int t;
	printf("enter t");
	scanf("%d" , &t);
	
	float simple_interest = (p*r*t)/100 ;
	printf("simple interest is : %f" , simple_interest);
	
	
	
	
	return 0;
}
