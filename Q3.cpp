#include<stdio.h>
int main(){
	
	int net_salary;
	printf("enter net salary : ");
	scanf("%d", &net_salary);
	
	int medical_insurance;
	printf("enter medical insurance : ");
	scanf("%d" , &medical_insurance);
	
	int transport_allowance;
	printf("enter transport allowance : ");
	scanf("%d" , &transport_allowance);
	
	int provident_fund;
	printf("enter provident fund : ");
	scanf("%d" , & provident_fund);
	
	printf("gross salary is : %d" , net_salary+medical_insurance+transport_allowance+provident_fund);
	
	
	
	return 0;
}
