#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main (void)
{
	 
	char s[3][3]={'1','4','7','2','5','8','3','6','9'}, xO = 'O'; 
	bool Fim = false, Parada;
	int x,y, cont=0 ;
	do{	
	    (xO=='X')?(xO='O'):(xO='X');
	   
		system("cls");
		cout<<"JOGO DA VELHA !";
		printf ( "\n\n %c|%c|%c\n -----\n %c|%c|%c\n -----\n %c|%c|%c\n\n",
				s[0][0],s[1][0],s[2][0],
				s[0][1],s[1][1],s[2][1],
				s[0][2],s[1][2],s[2][2] );
				
	       do{
					printf ("Informe a posicao de \" %c \" (Digite -1 caso desista) : ",xO);
					cin>>x;
					
				    if (x<-1 || x > 9)
					{
						Parada = true; 
						cout<<"\nO valor digitado e invalido!\n";
					}else Parada = false;
				   
					 if (x == -1) {
					 	Fim = false;
						break;	
					 }else{
						 if (x >= 7) {
						   x -= 7;
						   y = 2;
						 } else if (x > 3 ) {
						   x -= 4;
						   y = 1;
						} else {
						   x -= 1;
						   y = 0 ;
						}
				    }
				  
				if (Parada == false) 
				{  
				 if (s[x][y] == 'X' || s[x][y] == 'O' ) 
				 {
				 	cout<<"\nNo valor fornecido ja ha um elemento!\n";
				 	Parada = true;
				 } else {		 
				 	s[x][y] = xO;
				 }
	        	}
		 }while (Parada == true) ;
		 
	    Fim = !(   ((s[x][1] == s[x][2]) &&  (s[x][2] == s[x][0])) || ((s[0][y] == s[1][y]) && ( s[0][y] == s[2][y]) )
		  		 ||((s[1][1] == s[2][2]) &&  (s[1][1] == s[0][0])) || ((s[0][2] == s[2][0]) && ( s[2][0] == s[1][1]) ) ); 	
	   
		cont++;
		 
		if (cont >= 9) Fim = false;
      
	}while(Fim == true);
	
	
	if (cont >= 9) cout <<"\nDeu Vera"; else if (x == -1)  cout<<"\nJogador do "<<xO<<" desistiu!\n\n"; else cout<<"\njogador do "<<xO<<" ganhou!\n\n";
	
	return 0;
}
