#include "stdio.h"
unsigned long long hanoi(x){
	if (x==1)
	{
		return x;
	}
	else
	{
		return(2*hanoi(x-1)+1);
	}
}

int main(int argc, char const *argv[])
{
	int x;
	printf("Num de discos:\n" );
	scanf("%i",&x);
	printf("Movimentos %llu\n",hanoi(x) );
	return 0;
}