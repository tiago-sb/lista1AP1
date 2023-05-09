/*
 Fa�a um programa que pe�a um n�mero inteiro e determine se ele � ou n�o um n�mero primo. Um
n�mero primo � aquele que � divis�vel somente por ele mesmo e por 1.
*/
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int n, cont = 0;
    cin >> n;

    if((n <= 0)){
        while(n <= 0){
            cin >> n;
        }
    }

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cont++;
        }
    }

    if(cont <= 2){
        cout << "primo";
    }
    else {
        cout << "n�o � primo";
    }

    return 0;
}
