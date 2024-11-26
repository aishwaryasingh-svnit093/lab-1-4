#include<stdio.h>
int main(){
	
	int maths;
	printf("enter maths marks out of 100 : ");
	scanf("%d" , &maths);
	
	int sst;
	printf("enter sst");
	scanf("%d" , &sst);
	
	int biology;
	printf("enter biology");
	scanf("%d" , &biology);
	
	int english ;
	printf("enter english");
	scanf("%d" , &english);
	
	int pe;
	printf("enter pe");
	scanf("%d" , &pe);
	
	printf("total marks obtained is : %d\n " , maths+sst+biology+english+pe);
	
	float percentage = 100*(maths+sst+biology+english+pe)/500;
	printf("total percentage of marks is : %f" , percentage);

	
	
	
	return 0;
}
