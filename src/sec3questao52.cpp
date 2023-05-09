/*
Altere o programa de c�lculo do fatorial, permitindo ao usu�rio calcular o fatorial v�rias vezes e
limitando o fatorial a n�meros inteiros positivos e menores que 16
*/
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int fat = 1, n;
    cout << "Insira um valor entre 0 e 16: ";
    cin >> n;
    //teste para saber se o n�mero est� no intervalo desejado
    //caso n�o, entrar� em um loop at� que esteja
    if((n < 0)||(n > 16)){
        while((n < 0)||(n > 16)){
            cout << "n�o aceitamos este n�mero, insira um valor entre 0 e 16: ";
            cin >> n;
        }
    }
    //c�lculo do fatorial
    for(int i = n; i >= 1; i--){
        fat *= i;
    }
    //output com o valor desejado
    cout << fat;

    return 0;
}
