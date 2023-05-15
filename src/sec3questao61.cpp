/*
O Sr. Manoel Joaquim acaba de adquirir uma panificadora e pretende implantar a metodologia da
tabelinha, que j� � um sucesso na sua loja de 1,99. Voc� foi contratado para desenvolver o programa
que monta a tabela de pre�os de p�es, de 1 at� 50 p�es, a partir do pre�o do p�o informado pelo
usu�rio, conforme o exemplo abaixo:
Pre�o do p�o: R$ 0.18
Panificadora P�o de Ontem - Tabela de pre�os
|-|-------------|-|
|-| 01 - R$ 0.18|-|
|-| 02 - R$ 0.36|-|
|-| ...         |-|
|-| 50 - R$ 9.00|-|
|-|-------------|-|
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int qntPao;
    cout << "Insira a quantidade de p�es: ";
    cin >> qntPao;
    //la�o que priva o usu�rio de inserir um valor inv�lido
    while((qntPao < 1)||(qntPao > 50)){
        cout << "Valor inv�lido! \nInsira um novo valor: ";
        cin >> qntPao;
    }
    cout << "---tabela---" << endl;
    cout << fixed << setprecision(2);
    //la�o que printa a tabela desejada pelo cliente
    for(int i = 1;i <= qntPao; i++){
        if(i < 10){
            cout << "0" << i << " - R$ " << i * 0.18 << endl;
        }
        else {
            cout << i << " - R$ " << i * 0.18 << endl;
        }
    }

    return 0;
}
