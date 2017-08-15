#include <stdio.h>

int fib(int n);
int main()
{
	int number,result;

	printf("please input a number :");
	scanf("%d",&number);

	result=fib(number);
	printf("Fibonacci(%d)= %d\n",number,result);

	return 0;

}


int fib(int n)

{
	if (n==0)
		return 0;
	if (n==1)
		return 1;
	else 
		return (fib(n-1)+fib(n-2));
}