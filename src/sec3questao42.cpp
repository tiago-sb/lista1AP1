/*
Fa�a um programa que receba dois n�meros inteiros e mostre os n�meros inteiros que est�o no
intervalo compreendido por eles.
*/
#include <iostream>

using namespace std;

int main(){
    int i, j;
    cin >> i >> j;
    cout << endl;

    if (i < j){
        i++;
        while(i < j){
            cout << i << " ";
            i++;
        }
    }
    else {
        i--;
        while(i > j){
            cout << i << " ";
            i--;
        }
    }

    return 0;
}
