/*
Fa�a um programa que pe�a dois n�meros, base e expoente, calcule e mostre o primeiro n�mero
elevado ao segundo. N�o utilize a fun��o de pot�ncia da linguagem.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i, cont = 0;
    float j, res = 1;
    cin >> j >> i;
    cout << endl;

    if (i > 0){
        while(cont < i){
            res *= j;
            cont++;
        }
        cout << res;
    }
    else {
        while(cont < abs(i)){
            res *= j;
            cont++;
        }
        cout << fixed << setprecision(3);
        cout << 1 / res;
    }

    return 0;
}
