#include "stdio.h"

int main(int argc, char const *argv[])
{
	int i;
	for ( i = 1; i < 101; ++i)
	{
		if (i%15==0)
		{
			printf("FizzBuzz ");
		}
		else if (i%5==0)
		{
			printf("Buzz ");
		}
		else if (i%3==0)
		{
			printf("Fizz ");
		}
		else printf("%i ",i);
	}
	return 0;
}