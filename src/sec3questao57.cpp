/*
Fa�a um programa que pe�a para n pessoas a sua idade. Ent�o o programa dever� verificar se a
m�dia das idades da turma varia entre 0 e 25, 26 e 60 e maior que 60; e ent�o, dizer se a turma �
jovem, adulta ou idosa, conforme a m�dia calculada.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int idade, somaIdade, cont;
    float media;
    char sair;
    somaIdade = cont = 0;
    //estrutura que ir� permitir descobrir a classe da turma (jovem/adulta/velha)
    do {
        cout << "Insira a idade da " << cont + 1 << "a. pessoa (entre 0 e 129): ";
        cin >> idade;
        //estrutura que garante que o usu�rio ir� colocar uma idade v�lida
        while((idade < 0)||(idade >= 130)){
            cout << "Valor inv�lido! Tente novamente: ";
            cin >> idade;
        }
        somaIdade += idade;
        cont++;
        cout << "Inseriu todas as idades? ";
        cin >> sair;
    } while(sair != 's');
    media = somaIdade / cont;
    //teste para saber em qual
    system("cls");
    if(media > 60){
        cout << "Turma Idosa " << endl;
    } else if ((media > 25)&&(media <= 60)){
        cout << "Turma Adulta " << endl;
    } else {
        cout << "Turma Jovem " << endl;
    }

    return 0;
}
