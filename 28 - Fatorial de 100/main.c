#include "stdio.h"
#include "InfInt.h"

InfInt fat (x){
	if (x==1)
	{
		return x;
	}
	else return (x*fat(x-1));
}

int main(int argc, char const *argv[])
{
	printf("Fatorial de 100 = %d\n",fat(60) );
	return 0;
}