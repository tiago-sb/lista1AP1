/*
Fa�a um programa que leia 5 n�meros e informe a soma e a m�dia dos n�meros
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int cont = 0;
    float num, sNum = 0;

    while(cont < 5){
        cin >> num;
        sNum += num;
        cont++;
    }

    cout << fixed << setprecision(1);
    cout << sNum / cont;

    return 0;
}
