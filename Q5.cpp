#include<stdio.h>
int main(){
	
	int a,b,c;
	printf("enter value of a \n");
	scanf("%d" , &a);
	
	
	printf("enter value of b\n");
    scanf("%d" , &b);
	
	c=a;
	a=b;
	b=c; 
	printf("value of a is : %d\n" , a);
	printf("value of b is : %d\n" , b);
	
	
	
	
	
	return 0;
}
