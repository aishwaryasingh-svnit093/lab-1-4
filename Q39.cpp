#include<stdio.h>
int main (){
	
	int n;
    printf("enter n : ");
    scanf("%d" , &n);
    
    int sum=0;
    
    for( int i=1; i<=n ; i++){
    	
    	sum = sum+(i/(i*i));
    	
	}
	
	printf("value is : %d" , sum);
	
	
	
	
	return 0;
}
