/*
O Sr. Manoel Joaquim expandiu seus neg�cios para al�m dos neg�cios de 1,99 e da panificadora e
agora possui uma loja de conveni�ncias. Fa�a um programa que implemente uma caixa registradora
rudimentar. O programa dever� receber um n�mero desconhecido de valores referentes aos pre�os
das mercadorias. Um valor zero deve ser informado pelo operador para indicar o final da compra.
O programa deve ent�o mostrar o total da compra e perguntar o valor em dinheiro que o cliente
forneceu, para ent�o calcular e mostrar o valor do troco. Ap�s esta opera��o, o programa dever�
voltar ao ponto inicial, para registrar a pr�xima compra. A sa�da deve ser conforme o exemplo
abaixo:
Lojas Tabajara
Produto 1: R$ 2.20
Produto 2: R$ 5.80
Produto 3: R$ 0
Total: R$ 9.00
Dinheiro: R$ 20.00
Troco: R$ 11.00
...
Lojas Tabajara
Produto 1: R$
//N�O USE FUN��O//
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    float valor, pagamento, troco, smPg = 0,smValor = 0, cont = 1;
    //la�o que permite saber o valor total da compra do cliente
    do{
        cout << "Insira o valor do produto " << cont << ": R$ ";
        cin >> valor;
        while((valor < 0)){
            cout << "Valor Impr�prio! \nInsira outro valor: R$ ";
            cin >> valor;
        }
        smValor += valor;
        cont++;
    } while(valor != 0);
    //printe na tela do valor total da fatura do cliente
    cout << "Total: R$ " << smValor << endl;
    //importa��o dos dados do dinheiro do cliente
    cout << "Insira o valor do pagamento: R$ ";
    cin >> pagamento;
    smPg += pagamento;
    troco = smPg - smValor;
    //la�o que priva o cliente de inserir valores abaixo do m�nimo para pagar a d�vida
    while(troco < 0){
        cout << "O valor que voce nos deu n�o conseguir� pagar sua compra, \nInsira mais dinheiro: ";
        cin >> pagamento;
        //la�o que priva o cliente de inserir valor inv�lido
        while(pagamento < 0){
            cout << "Valor Impr�prio! \nInsira outro valor: R$ ";
        }
        smPg += pagamento;
        troco = smPg - smValor;
    }
    //printe na tela que informa os resultados finais da compra
    cout << fixed << setprecision(2);
    cout << endl;
    if(troco == 0){
        cout << "Troco: R$ 0.0 \nVolte sempre! " << endl;
    } else if(troco > 0){
        cout << "Troco: R$ " << troco << endl;
    }

    return 0;
}
