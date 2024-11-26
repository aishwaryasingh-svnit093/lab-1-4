#include<stdio.h>
int main(){
	
	int a,b,c;
	printf("enter three numbers \n");
	printf("enter the value of a : ");
	scanf("%d" , &a);
	
	printf("enter the value of b : ");
	scanf("%d" , &b);
	
	printf("enter the value of c : ");
	scanf("%d" , &c);
	
	if (a>b&&b>c){
		printf("maximum number is %d" , a);
	}
	else if (b>a&&b>c){
		printf("maximum number is %d" , b);
	}
	else {
		printf("maximum number is %d" , c);
	}
	
	
	
	
	
	
	
	
	return 0;

}
