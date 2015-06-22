#include <iostream>
#include <windows.h>
#include <string>
#include <wctype.h>
#include <stdio.h>

using namespace std;

void TextoPraMorse (char *s)
{
    string aux;
    do{
         switch (towupper(*s))
         {
            case('A'): aux = aux+".- ";  break;
            case('B'): aux = aux+"-... "; break;
            case('C'): aux = aux+"-.-. "; break;
            case('D'): aux = aux+"-.. "; break;
            case('E'): aux = aux+". "; break;
            case('F'): aux = aux+"..-. "; break;
            case('G'): aux = aux+"--. "; break;
            case('H'): aux = aux+".... "; break;
            case('I'): aux = aux+".. "; break;
            case('J'): aux = aux+".--- "; break;
            case('K'): aux = aux+"-.- "; break;
            case('L'): aux = aux+".-.. "; break;
            case('M'): aux = aux+"-- "; break;
            case('N'): aux = aux+"-. "; break;
            case('O'): aux = aux+"--- "; break;
            case('P'): aux = aux+".--. "; break;
            case('Q'): aux = aux+"--.- "; break;
            case('R'): aux = aux+".-. "; break;
            case('S'): aux = aux+"... "; break;
            case('T'): aux = aux+"- "; break;
            case('U'): aux = aux+"..- "; break;
            case('V'): aux = aux+"...- "; break;
            case('W'): aux = aux+".-- "; break;
            case('X'): aux = aux+"-..- "; break;
            case('Y'): aux = aux+"-.-- "; break;
            case('Z'): aux = aux+"--.. "; break;


            case('1'): aux = aux+".---- "; break;
            case('2'): aux = aux+"..--- "; break;
            case('3'): aux = aux+"...-- "; break;
            case('4'): aux = aux+"....- "; break;
            case('5'): aux = aux+"..... "; break;
            case('6'): aux = aux+"-.... "; break;
            case('7'): aux = aux+"--... "; break;
            case('8'): aux = aux+"---.. "; break;
            case('9'): aux = aux+"----. "; break;
            case('0'): aux = aux+"----- "; break;

            case(':'): aux = aux+"--... "; break;
            case(','): aux = aux+"--..-- "; break;
            case(';'): aux = aux+"-.-.-. "; break;
            case('?'): aux = aux+"..--.. "; break;
            case('!'): aux = aux+"-.-.-- "; break;
            case(' '): aux = aux+"/ "; break;
        }
          *s++;
    }while(*s != NULL);

  cout<<aux<<"\nAguarde o audio...";
  Sleep(1000);
  for (int i = 0; i !=aux.length(); i++)
    switch (towupper(aux[i]))
    {
       case('.'): Beep(800,500); break;
       case('-'): Beep(800,1000); break;
       case('/'): Sleep(1000);

    }
}

void MorsePraTexto(char *s)
{
    char *aux;
    string aux1;
    aux = strtok (s," ");
    while (aux != NULL)
    {
         if (strcmp(aux, ".-")    == 0)      aux1 = aux1+'A';
         else if (strcmp(aux,"-...")   == 0) aux1 = aux1+'B';
         else if (strcmp(aux, "-.-.")  == 0) aux1 = aux1+'C';
         else if (strcmp(aux,"-..")    == 0) aux1 = aux1+'D';
         else if (strcmp(aux,".")      == 0) aux1 = aux1+'E';
         else if (strcmp(aux,"..-.")   == 0) aux1 = aux1+'F';
         else if (strcmp(aux,"--.")    == 0) aux1 = aux1+'G';
         else if (strcmp(aux,"....")   == 0) aux1 = aux1+'H';
         else if (strcmp(aux,".." )    == 0) aux1 = aux1+'I';
         else if (strcmp(aux,".---")   == 0) aux1 = aux1+'J';
         else if (strcmp(aux,"-.-")    == 0) aux1 = aux1+'K';
         else if (strcmp(aux,".-..")   == 0) aux1 = aux1+'L';
         else if (strcmp(aux,"--" )    == 0) aux1 = aux1+'M';
         else if (strcmp(aux,"-." )    == 0) aux1 = aux1+'N';
         else if (strcmp(aux,"---")    == 0) aux1 = aux1+'O';
         else if (strcmp(aux,".--.")   == 0) aux1 = aux1+'P';
         else if (strcmp(aux,"--.-")   == 0) aux1 = aux1+'Q';
         else if (strcmp(aux,".-.")    == 0) aux1 = aux1+'R';
         else if (strcmp(aux,"...")    == 0) aux1 = aux1+'S';
         else if (strcmp(aux,"-")      == 0) aux1 = aux1+'T';
         else if (strcmp(aux,"..-")    == 0) aux1 = aux1+'U';
         else if (strcmp(aux,"...-")   == 0) aux1 = aux1+'V';
         else if (strcmp(aux,".--")    == 0) aux1 = aux1+'W';
         else if (strcmp(aux,"-..-")   == 0) aux1 = aux1+'X';
         else if (strcmp(aux,"-.--")   == 0) aux1 = aux1+'Y';
         else if (strcmp(aux,"--..")   == 0) aux1 = aux1+'Z';
         else if (strcmp(aux,".----")  == 0) aux1 = aux1+'1';
         else if (strcmp(aux,"..---")  == 0) aux1 = aux1+'2';
         else if (strcmp(aux,"...--")  == 0) aux1 = aux1+'3';
         else if (strcmp(aux,"....-")  == 0) aux1 = aux1+'4';
         else if (strcmp(aux,".....")  == 0) aux1 = aux1+'5';
         else if (strcmp(aux,"-....")  == 0) aux1 = aux1+'6';
         else if (strcmp(aux,"--...")  == 0) aux1 = aux1+'7';
         else if (strcmp(aux,"---..")  == 0) aux1 = aux1+'8';
         else if (strcmp(aux,"----.")  == 0) aux1 = aux1+'9';
         else if (strcmp(aux,"-----")  == 0) aux1 = aux1+'0';
         else if (strcmp(aux,"--...")  == 0) aux1 = aux1+' ';
         else if (strcmp(aux,"--..--") == 0) aux1 = aux1+',';
         else if (strcmp(aux,"-.-.-.") == 0) aux1 = aux1+';';
         else if (strcmp(aux,"..--..") == 0) aux1 = aux1+'?';
         else if (strcmp(aux,"-.-.--") == 0) aux1 = aux1+'!';
         else if (strcmp(aux,"/") == 0) aux1 = aux1+' ';
         else { cout<<"isso nao esta em morse\n\n"; break; }
        aux = strtok (NULL," ");
   }
 cout<<aux1;
}
int main()
{
   char c[255],i;

   cout<<"Tabela de Opcoes\n1 - Para Converter texto em codigo Morse\n2 - Para Converter codigo Morse em texto\n\nEscolha somenete uma das duas opcao acima: ";
   cin>>i;

   cout<<"\nInforme o Texto: ";
   fflush(stdin);  // limpar o Buffer, a função gets nao faz automaticamente
   gets(c);       // ler a string, caso usasse outra função o C/C++ terminaria de ler a string no espaço em branco

    (i == '1') ? TextoPraMorse(c) : MorsePraTexto(c);

   return 0;
}
