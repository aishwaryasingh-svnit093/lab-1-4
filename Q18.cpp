#include<stdio.h>

int main(){
	
	int a ;
	printf("enter a : ");
	scanf("%d" , &a);
	
	int b;
	printf("enter b : ");
	scanf("%d" , &b);
	
	int c;
	printf("enter c : ");
	scanf("%d" , &c);
	
	a>b && a>c ? printf("a is max \n") : printf("a in not max \n");
	b>a && b>c ? printf("b is max \n") : printf("b is not max \n");
	c>a && c>b ? printf("c is max \n") : printf("c is not max \n");
	

	return 0;
}
