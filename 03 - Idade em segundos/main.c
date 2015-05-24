#include "stdio.h"

int main(int argc, char const *argv[])
{
	int x;
	printf("Digite sua idade:\n");
	scanf("%i",&x);
	printf("\nVc possui aproximadamente %i segundos de vida\n",x*31536000 );
	return 0;
}