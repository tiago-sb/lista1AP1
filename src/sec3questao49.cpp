/*
Fa�a um programa que calcule o fatorial de um n�mero inteiro fornecido pelo usu�rio. Ex.: 5! = 5 .
4 . 3 . 2 . 1 = 120
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int num, fat = 1;
    cin >> num;

    for(int i = num; i >= 1;i--){
        fat *= i;

    }

    system("cls");
    cout << fat << endl;

    return 0;
}
