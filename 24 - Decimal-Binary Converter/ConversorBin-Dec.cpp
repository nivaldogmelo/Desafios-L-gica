#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;


int Binario (char *s)
{
    int i = 0;
    while(*s != NULL)
    {

        if (s[0] == '1')
            i += pow(2,(strlen(s)-1));

        s++;
    }
    return i;
}

string Decimal (char *s)
{
  string resp;
    for (int aux = atoi(s); aux != 0; aux /= 2)
    {
        if (aux%2 == 0)
            resp = resp + '1';
        else resp = resp + '0';
    }
    return resp;
}

int main (void)
{
   char i, c[255];
   printf("Tabela de Opcoes\n1 - Para Converter Decimal em Binario\n2 - Para Converter Binario em Decimal\n\nEscolha somenete uma das duas opcao acima: ");
   cin>>i;
    printf("\nInforme o Numero: ");
    cin>>c;

    if (i == '1')
        cout<<"\nResultado:"<<Decimal(c);
        else printf("\nResultado: %i", Binario(c));
   return 0;

}
