/*
Fa�a um programa que calcule o valor total investido por um colecionador em sua cole��o de CDs e
o valor m�dio gasto em cada um deles. O usu�rio dever� informar a quantidade de CDs e o valor
pago em cada um.
*/

#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main() {
    setlocale(LC_ALL,"portuguese");
    int qntCds;
    float valor, smValor = 0;
    cout << "Insira a quantidade de Cds comprados: ";
    cin >> qntCds;
    //la�o que priva o usu�rio de entrar com um valor inv�lido
    while((qntCds < 0)){
        cout << "Valor Inv�lido! Tente novamente: ";
        cin >> qntCds;
    }
    //la�o que calcula o valor do investimento
    for(int i = 1; i <= qntCds; i++){
        cout << "Insira o valor gasto no " << i << "o. Cd: ";
        cin >> valor;
        smValor += valor;
        cout << endl;
    }
    //informando ao usu�rio o total gasto, e a m�dia por cada aquisi��o
    system("cls");
    cout << fixed << setprecision(2);
    cout << "Voc� gastou R$ " << smValor << " neste investimento" << endl;
    cout << "Uma m�dia de R$ " << smValor / qntCds << " por Cd " << endl;

    return 0;
}
