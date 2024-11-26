#include<stdio.h>
int main(){
	
	int i,n,m,power;
	
	printf("enter number : ");
	scanf("%d" , &n);
	
	printf("enter number : ");
	scanf("%d" , &m);
	
	power=1;
	
	for(i=1 ; i<=m;i++){
		power=power*n;
	}
	
	printf("%d" , power);
	
	
	return 0;
}
