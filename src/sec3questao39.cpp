/*
Fa�a um programa que leia 5 n�meros e informe o maior n�mero.
*/
#include <iostream>

using namespace std;

int main(){
    int i = 0;
    float num, maior;
    cin >> num;
    maior = num;

    while (i < 4){
        cin >> num;
        if(maior < num){
            maior = num;
        }
        i++;
    }

    system("cls");
    cout << maior;

    return 0;
}
