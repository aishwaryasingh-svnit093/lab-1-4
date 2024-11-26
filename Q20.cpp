#include<stdio.h>
#include<math.h>
int main(){
	
	int a;
	printf("enter the value of a : ");
	scanf("%d" , &a);
	
	int b;
	printf("enter the value of b : ");
	scanf ("%d" , &b);
	
	int sum=a+b;
	int diff=a-b;
	int multiply=a*b;
	int divide=a/b;

char p ; //a-addition , s-subtraction , m - multiply , d- divide
	printf("enter(a,s,m,d) : ");
	scanf("%s" , &p);
	
	switch(p){
		
		case 'a' : printf("%d" , sum);
		break ;
		
		case 's' : printf("%d" , diff);
		break ;
		
		case 'm' : printf("%d" , multiply);
		break ;
		
		case 'd' : printf("%f" , divide);
		break ;
	}
	
	

	
	
	
	
	
	
	return 0;
}
