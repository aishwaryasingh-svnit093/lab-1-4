#include<stdio.h>
int main(){
	
	int celsius;
	printf("enter censius");
	scanf("%d" , &celsius);
	
	
	float ans = (celsius-32)*5/9;
    printf("celsius to fahrenheit is : %f" , ans );
	
	
	
	
	return 0;
}
