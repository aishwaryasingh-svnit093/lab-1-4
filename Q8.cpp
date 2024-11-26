#include<stdio.h>
int main(){
	
	int period_of_revolution;
	printf("earth takes 31558150 seconds period of revolution \n");
     
	float time = 31558150/60;
	printf("earth's period of revolution in minuits : %f \n" , time);
	
	float time_hours = 31558150/3600;
	printf("earth's period of revolution in hours : %f \n " , time_hours);
	
	float time_days = 31558150/86400;
	printf("earth's period of revolution in days : %f \n" , time_days);	
	
	
	return 0 ;
}
