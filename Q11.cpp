#include<stdio.h>
int main(){
	
	int a;
	printf("enter seconds : ");
	scanf("%d" , &a);
	
	float b = a/60.0 ;
	float c = a/3600.0 ;



	printf("above value in minuits : %f \n" , b);
	printf("above value in hours : %f" , c);
	
	
	
	
	
	
	
	return 0;
}
