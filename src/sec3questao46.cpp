/*
Fa�a um programa que pe�a 10 n�meros inteiros, calcule e mostre a quantidade de n�meros pares
e a quantidade de n�meros impares.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int num, par = 0, imp = 0;
    for(int i = 1; i <= 10;i++){
        cin >> num;
        if(num % 2 == 0){
            par++;
        }
        else{
            imp++;
        }
    }
    system("cls");
    cout << "pares: " << par << endl;
    cout << "impares: " << imp << endl;
    return 0;
}
