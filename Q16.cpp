 #include<stdio.h>
int main(){
	
	int a,b,c;
	printf("enter the 3 numbers \n");
	printf("enter the value of a : ");
	scanf("%d" , &a);
	printf("enter the value of b : ");
	scanf("%d" , &b);
	printf("enter the value of c : ");
	scanf("%d" , &c);
	
	if(a>b){
		if(c>a){
			printf(" maximum number is %d" , c);
		}
		else {
			printf("maximum number is %d" , a);
		}
	}
	else if (b>c){
		if(a>b){
			printf(" maximum number is %d" , a);
		}
		else {
			printf("maximum number is %d" , b);
		}

		}
	else {
		if(b>c){
			printf("maximum number is %d" , b);
		}
		else {
			printf("maximum number is %d" , c);
		}
	}
	
     
	 	
	
	
	
	
	return 0;
}
