#include<stdio.h>
int main()
{
	int a,b;
	char task;
	
	printf(" enter process for calculation : \n addition : a\n multipication: m \n dividion : d \n subtraction : s \n");
	scanf("%c",&task);
	
	printf("enter two digits :");
	scanf("%d%d",&a,&b);
	
	switch (task)
	{
		case 'a':
		printf("addition of a &b is %d", a+b);
		break;
		case 's':
		printf("subtraction of a &b is %d", a-b);
		break;
		case 'm':
		printf("multiplication of a &b is %d", a*b);
		break;
		case 'd':
		printf("divison of a &b is %d", a/b);
		break;
		default :
		printf("sorry");
	}
	return 0;
}
