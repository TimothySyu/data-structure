//basic code test a009 

#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	int people,amount1,amount2;

	scanf("%d",&people);
	amount1=(people%11);
	amount2=(people/11);

	printf("%d\n",amount1*100+amount2*1000);

	return 0;
}