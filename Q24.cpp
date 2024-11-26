#include<stdio.h>
#include<math.h>
int main (){
	
	int x;
	printf("enter x: ");
	scanf("%d" , &x);
	
	int n;
	printf("enter n : ");
	scanf("%d" , &n);
	

	
	if(n==1){
		printf("the value of y is : %d " , 1+x);
	}
	else if (n==2){
		printf("the value of y is : %f" , 1+(x/n));
	}
	else if(n==3){
		printf("the value of y is : %f" , 1+(pow(x,n)) );
	}
	else {
		printf("the value of y is : %f" , (n*x)+1 );
	}
	
	
	
	return 0;
}
