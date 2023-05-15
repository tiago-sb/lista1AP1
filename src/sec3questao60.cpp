/*
O Sr. Manoel Joaquim possui uma grande loja de artigos de R$ 1,99, com cerca de 10 caixas. Para
agilizar o c�lculo de quanto cada cliente deve pagar, ele desenvolveu uma tabela que cont�m o
n�mero de itens que o cliente comprou e ao lado o valor da conta. Desta forma a atendente do
caixa precisa apenas contar quantos itens o cliente est� levando e olhar na tabela de pre�os. Voc�
foi contratado para desenvolver o programa que monta esta tabela de pre�os, que conter� os pre�os
de 1 at� 50 produtos, conforme o exemplo abaixo:

|-|-------------------------------------|-|
|-| Lojas Quase Dois - Tabela de pre�os |-|
|-| 1 - R$ 1.99                         |-|
|-| 2 - R$ 3.98                         |-|
|-| ...                                 |-|
|-| 50 - R$ 99.50                       |-|
|-|-------------------------------------|-|
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL,"portuguese");
    int qntProduto;
    float pagamento = 0;
    cout << "Insira a quantidade de produtos [m�nimo - 1 | m�ximo - 50]: ";
    cin >> qntProduto;
    //la�o que priva o usu�rio de inserir um valor fora do intervalo desejado
    while((qntProduto <= 0)||(qntProduto > 50)){
        cout << endl << "Quantidade inv�lida! \nTente novamente [m�nimo - 1 | m�ximo - 50]: ";
        cin >> qntProduto;
    }
    //la�o que calcula a quantidade a ser paga pelo cliente
    cout << "--tabela--" << endl;
    for(int i = 1; i <= qntProduto; i++){
        cout << fixed << setprecision(2);
        //teste para melhorar a identa��o do print na tela
        if(i < 10){
            if((i * 1.99) < 10){
                cout << "0" << i  << " - " << "0" << i * 1.99 << endl;
            }
            else {
                cout << "0" << i  << " - " << i * 1.99 << endl;
            }
        }
        else {
            cout << i << " - " << i * 1.99 << endl;
        }
    }

    return 0;
}
