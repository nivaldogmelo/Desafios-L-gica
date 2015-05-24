#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

    // Declarando as variáveis
    int op, moeda;

    // Destino do Goto
    escolha:
    cout << "Você quer: \n1-Cara \n2-Coroa" << endl;
    cin >> op;

    // Verificando se o usuário digitou uma opção válida
    // Se não ele volta a escolha
    if(op != 1 && op != 2){
        cout << "Por favor, escolha uma opção válida" << endl;
        goto escolha;
    }

    /* Gerador de número aleatório, escolhi o srand pois com o rand o programa sempre repete
    os números gerados ao iniciar o programa */
    srand(time(NULL));
    moeda = rand () % 2 + 1;

    //Verificando o resultado da moeda
    if (moeda == 1){
        cout << "Deu cara";
    } else {
        cout << "Deu Coroa";
    }

}
