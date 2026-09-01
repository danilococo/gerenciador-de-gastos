\\pero gay
\\lgbtqi++


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salario;
    double aluguel, transporte, alimentacao, lazer, outros;
    double totalGastos, restante;

    cout << "=====================================\n";
    cout << "       GERENCIADOR DE GASTOS\n";
    cout << "=====================================\n\n";

    // Pergunta o salário
    cout << "Quanto voce ganha por mes? R$ ";
    cin >> salario;

    cout << "\nAgora informe seus gastos mensais:\n\n";

    // Gastos
    cout << "Aluguel: R$ ";
    cin >> aluguel;

    cout << "Transporte: R$ ";
    cin >> transporte;

    cout << "Alimentacao: R$ ";
    cin >> alimentacao;

    cout << "Lazer: R$ ";
    cin >> lazer;

    cout << "Outros gastos: R$ ";
    cin >> outros;

    // Calcula o total
    totalGastos = aluguel + transporte + alimentacao + lazer + outros;

    // Calcula quanto sobra
    restante = salario - totalGastos;

    cout << fixed << setprecision(2);

    cout << "\n=====================================\n";
    cout << "          RESUMO FINANCEIRO\n";
    cout << "=====================================\n";

    cout << "Salario:       R$ " << salario << endl;
    cout << "Aluguel:       R$ " << aluguel << endl;
    cout << "Transporte:    R$ " << transporte << endl;
    cout << "Alimentacao:   R$ " << alimentacao << endl;
    cout << "Lazer:         R$ " << lazer << endl;
    cout << "Outros:        R$ " << outros << endl;

    cout << "-------------------------------------\n";
    cout << "Total de gastos: R$ " << totalGastos << endl;
    cout << "Dinheiro restante: R$ " << restante << endl;

    // Verifica a situação financeira
    cout << "\n";

    if (restante > 0) {
        cout << "Voce esta dentro do seu salario!\n";
    } 
    else if (restante == 0) {
        cout << "Atencao: voce gastou todo o seu salario.\n";
    } 
    else {
        cout << "Cuidado! Seus gastos ultrapassaram seu salario.\n";
    }

    cout << "\n=====================================\n";

    return 0;
}
