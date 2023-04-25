/**
Faca um programa que leia e valide as seguintes informacoes:
- Nome: maior que 3 caracteres;
- Idade: entre 0 e 150;
- Salario: maior que zero;
- Estado Civil: 's', 'c', 'v', 'd', 'u';
*/
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    string nome, est;
    int id = -1;
    float sal = -1;
    char eC = 'n';
    cout << "Insira seu nome: ";
    getline(cin, nome);
    while((id < 0)||(id > 150)){
        int i = 0;
        cout << "insira sua idade, aceitamos entre 0 e 150: ";
        cin >> id;
        system("cls");
    }
    while(sal < 0){
        cout << "Insira seu sal�rio, aceitamos apenas valores reais: ";
        cin >> sal;
        system("cls");
    }
    while((eC != 's')&&(eC != 'c')&&(eC != 'v')&&(eC != 'd')&&(eC != 'u')){
        cout << "Insira seu estado civ�l: " << endl;
        cout << "s - solteiro(a): " << endl;
        cout << "c - casado(a): " << endl;
        cout << "v - vi�vo(a): " << endl;
        cout << "d - divorciado(a): " << endl;
        cout << "u - uni�o est�vel: " << endl;
        cout << ": ";
        cin >> eC;
        system("cls");
    }
    switch(eC){
        case 's':
            est = "solteiro(a)"; break;
        case 'c':
            est = "casado(a)"; break;
        case 'v':
            est = "vi�vo(a)"; break;
        case 'd':
            est = "divorciado(a)"; break;
        case 'u':
            est = "uni�o est�vel"; break;
    }
    cout << "Ol�, " << nome << endl;
    cout << "Idade: " << id << endl;
    cout << "Sal�rio: " << sal << endl;
    cout << "Estado Civil: " << est << endl;

    return 0;
}
