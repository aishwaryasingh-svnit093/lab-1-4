#include<stdio.h>
int main(){
	
	int a;
	printf("enter the hour : ");
	scanf("%d" , &a);
	
	int b;
	printf("enter the minuits : ");
	scanf("%d" , &b);
	
	int c;
	printf("enter the seconds : ");
	scanf("%d" , &c);
	
	float d = (c+(b*60)+(a*60*60));
	printf("total seconds is : %f " , d);
	
	
	
	
	
	
	return 0;
}
