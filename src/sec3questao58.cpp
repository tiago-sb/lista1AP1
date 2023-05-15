/*
Fa�a um programa que calcule o n�mero m�dio de alunos por turma. Para isto, pe�a a quantidade
de turmas e a quantidade de alunos para cada turma. As turmas n�o podem ter mais de 40 alunos.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int qntTurm, qntAluno, somAluno = 0, cont = 0;
    cout << "Insira a quantidade de turmas: ";
    cin >> qntTurm;

    for(int i = 1; i <= qntTurm; i++){
        cout << "Insira a quantidade de alunos da turma " << i << " : ";
        cin >> qntAluno;
        while(qntAluno > 40){
            cout << "N�mero de alunos n�o aceito! Entre com uma nova quantidade: ";
            cin >> qntAluno;
        }
        somAluno += qntAluno;
        cont++;
    }

    cout << fixed << setprecision(1);
    cout << "Numero m�dio de alunos por turma: " << somAluno / cont;

    return 0;
}
