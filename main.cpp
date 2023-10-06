#include <iostream>
#include <math.h>
#include <iomanip>
#define TRACO "-------------------------------------"

using namespace std;

struct Calculadora
{
    float operando1;
    float operando2;
    char operacao;
};

float soma(Calculadora& calc);
float subtracao(Calculadora& calc);
float multiplicacao(Calculadora& calc);
float divisao(Calculadora& calc);

int main()
{
    Calculadora calc;

    cout << "========== CALCULADORA ==========" << endl;
    cout << endl;

    cout << "Insira o primeiro número: ";
    cin >> calc.operando1;
    cout << endl;

    cout << "Insira o segundo número: ";
    cin >> calc.operando2;
    cout << endl << endl;

    cout << TRACO << endl;
    cout << "Qual operação deseja realizar:" << endl;
    cout << TRACO << endl << endl;

    cout << "[ + ] Soma" << endl;
    cout << "[ - ] Subtração" << endl;
    cout << "[ * ] Multiplicação" << endl;
    cout << "[ / ] Divisão" << endl;
    cout << "[ 0 ] Sair do programa"  << endl << endl;

    cout << TRACO << endl;
    cout << "Insira o operador correspondente: ";
    cin >> calc.operacao;

    switch (calc.operacao)
    {
        case '+':
            cout << "Resultado: " << soma(calc) << endl;
            break;

        case '-':
            cout << "Resultado: " << setprecision(2) << subtracao(calc) << endl;
            break;

        case '*':
            cout << "Resultado: " << setprecision(2) << multiplicacao(calc) << endl;
            break;

        case '/':
            cout << "Resultado: " << setprecision(2) << divisao(calc) << endl;
            break;

        case '0':
            cout << "Programa finalizado.";
            return 0;

        default:
            cout << "Opção inválida.";
            break;
    }

    cout << endl;
    return 0;
}

// Função soma
float soma(Calculadora& calc)
{    
    return calc.operando1 + calc.operando2;
}

// Função subtração
float subtracao(Calculadora& calc){    
    return calc.operando1 - calc.operando2;
}

// Função divisão
float divisao(Calculadora& calc) {
    if (calc.operando2 == 0)
    {
        return calc.operando1;
    }
    
    return calc.operando1 / calc.operando2;
}

// Função multiplicação
float multiplicacao(Calculadora& calc)
{
    return calc.operando1 * calc.operando2;
}