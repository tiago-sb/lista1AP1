/*
A s�rie de Fibonacci � formada pela sequ�ncia 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Fa�a um programa
capaz de gerar a s�rie at� o n-�simo termo.
*/
#include <iostream>

using namespace std;

int main(){
    long int n, a = 1, b = 1, aux;
    cin >> n;
    cout << a << " " << b << " ";

    for(int i = 3;i <= n; i++){
        aux = a + b;
        cout << aux << " ";
        a = b;
        b = aux;
    }

    return 0;
}
