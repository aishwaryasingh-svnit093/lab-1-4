#include<stdio.h>

int main(){
	
	int n;
	printf("enter number : ");
	scanf("%d" , &n);
	
	int arr[n];
	printf("enter array elements: ");
	for(int i=0;i<n;i++){
		scanf("%d" , &arr[i]);
	}
	
	int max=0,min=99999;
	
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
	 }
	
		
	
		
	}
	
	printf("min number : %d\n" , min);
	printf("max number : %d" , max);
	
	
	return 0;
}
