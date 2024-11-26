#include<stdio.h>
int main(){
	
	int maths;
	printf("enter maths out of 10 : ");
	scanf("%d" , &maths);
	
	int sst;
	printf("enter sst out of 10 : ");
	scanf("%d" , &sst);
	
	int physics;
	printf("enter physics out of 10 : ");
	scanf("%d" , &physics);
	
	
	int chem ;
	printf("enter chem out of 10 : ");
	scanf("%d" , &chem);
	
	int biology;
	printf("enter biology chem out of 10 : ");
    scanf("%d" , &biology);	

	int total = maths+sst+physics+chem+biology ;
	printf("total marks = %d \n" , total);
	
	if(total > 35) {
		printf("grade : A+ ");
	}
	else if (total > 25) {
		printf("grade : A ");
	}
	else if (total > 5) {
		printf("grade : C");
	}
	else {
		printf("fail");
	}
	
	
	return 0;
}
