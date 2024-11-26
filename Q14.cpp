#include<stdio.h>
int main(){
	
	char a ;
    printf("enter character");
    scanf("%c" , &a);
    printf("the ASCII value of given characer = %d \n" , a );
    
    if(a>=65&&a<=90){
    	printf(" character is capital case letter");
	}
	else if (a>=97&&a<=122){
		printf("character is small case letter");
		}
	else if (a>=48&&a<=57){
		printf("character is digit");
	}	
	else{
		printf("character is symbol ");
	}
    
	
	
	
	
	return 0;
}
