#include "stdio.h"


unsigned long long fib(x){
	if (x==0)
		return 0;
	else if (x==1)
		return 1;
	else return ( fib(x-1)+fib(x-2));

}

int main(int argc, char const *argv[])
{
	int x,i;
	printf("Digite um num\n");
	scanf("%i",&x);
	printf("Serie:\n");

	for ( i = 0; i <= x; ++i)
	{
		printf("%llu ",fib(i) );
	}
	return 0;
}