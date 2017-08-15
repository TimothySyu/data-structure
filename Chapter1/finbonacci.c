#include <stdio.h>
void print();
int fib(int n);
int main()
{
	int exit;
	
	do{
		print();
		char select;
		exit=0;
		
		printf("exit(Y/N)? :");
		scanf(" %s",&select);
		if (select=='y'||select=='Y')
			exit=1;
		else
			exit=0;


		}while(exit<1); 
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

void print()
{
		int number,result;
		
		printf("please input a number :");
		scanf("%d",&number);

		result=fib(number);
		printf("Fibonacci(%d)= %d\n",number,result);

		void exit(void);
		

}