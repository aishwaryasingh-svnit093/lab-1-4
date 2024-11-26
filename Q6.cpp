#include<stdio.h>
int main(){
	
	int a,b;
	printf("enter value of a : \n");
	scanf("%d" , &a);
	
	printf("enter value of b : \n");
	scanf("%d" , &b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("new value of a : %d\n" , a);
	printf("new value of b : %d\n", b);
	
	
	
	return 0;
}
