#include <stdio.h>

int Fac(int n);
int main()

{
	int number,result;

	printf("please enter a number:");
	scanf(" %d",&number);
	
	result=Fac(number);
	
	printf("Facteria(%d)=%d\n",number,result);
	
	return 0;

}

int Fac(int n)
{
	if(n==0)
		return 1;
	else 
		return(Fac(n-1)*n);

}