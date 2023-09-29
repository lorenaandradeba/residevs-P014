#include <iostream>
#include <math.h>

using namespace std;

int calcularFatorial(int numero);

int main()
{
    int numero;

    cout << "Insira o PRIMEIRO número que deseja saber o fatorial: ";
    cin >> numero;
    cout << "O fatorial de " << numero << " é:" << calcularFatorial(numero) << endl;

    cout << "Insira o SEGUNDO número que deseja saber o fatorial: ";
    cin >> numero;
    cout << "O fatorial de " << numero << " é:" << calcularFatorial(numero) << endl;

    cout << "Insira o TERCEIRO número que deseja saber o fatorial: ";
    cin >> numero;
    cout << "O fatorial de " << numero << " é:" << calcularFatorial(numero) << endl;
    return 0;
}

// Função fatorial
int calcularFatorial(int numero)
{

    if (numero < 0)
    {
        cout << "Erro: O fatorial de um número negativo não está definido.";
        return 0; // Retorna 0 em caso de erro
    }

    if (numero == 0)
    {
        cout << "O fatorial do número " << numero << " é: ";
        return 1; // Retorna 1 caso o numero inserido seja 0
    }

    int fatoracao = 1;

    for (int i = 1; i <= numero; i++)
    {

        fatoracao *= i;
    }

    return fatoracao;
}