#include<stdio.h>
int main(){
	
	int n;
	printf("enter any number: ");
    scanf("%d" , &n);
	printf("factors of the given number are : \n");
	for (int i=1;i<=n ;i++){
		if(n%i==0)
		{
			printf("%d \n" ,i);
		}
	}
	
	
	
	return 0;
}
