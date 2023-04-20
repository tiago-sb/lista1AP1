/**
Faca outro programa para uma loja de tintas. O programa devera pedir o tamanho da area a ser
pintada, em metros quadrados. Considere que a cobertura da tinta eh de 1 litro para cada 6 metros
quadrados e que a tinta eh vendida em latas de 18 litros, que custam R$ 80,00 ou em galoes de 3,6
litros, que custam R$ 25,00.
Informe ao usu�rio a quantidade de tinta a ser comprada e os respectivos pre�os em 3 situa��es:
(a) comprar apenas latas de 18 litros;
(b) comprar apenas gal�es de 3,6 litros;
Acrescente 10% de folga e sempre arredonde os valores para cima, isto �, considere latas cheias.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    float area, l1;
    int op, l;
    cout << "Insira a �rea a ser pintada em metros quadrados: ";
    cin >> area;
    cout << "Informe sua op��o" << endl;
    cout << "Op��o 1 -> gasto total comprando apenas LATAS: " << endl;
    cout << "Op��o 2 -> gasto total comprando apenas GAL�ES: " << endl;
    cout << ": ";
    cin >> op;
    if(op == 1){
        l = 108;
        while(l < area){
            l = l + 108;
        }
        cout << "comprando apenas latas voc� ter� de gastar: " << endl;
        cout << "Total de latas: " << l1/108 << endl;
        cout << fixed << setprecision(2);
        cout << "Total de custo: R$ " << (l/108) * 80 << endl;
    } else if(op == 2){
        l1 = 21.6;
        while(l1 < area){
            l1 = l1 + 21.6;
        }
        l = l1/21.6;
        cout << "comprando apenas gal�es voc� ter� de gastar: " << endl;
        cout << "Total de Gal�es: " << l << endl;
        cout << fixed << setprecision(2);
        cout << "Total de custo: R$ " << l * 25 << endl;
    }
    return 0;
}
