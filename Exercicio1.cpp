#include <iostream>

using namespace std;

int calcularFatorial(int numero);

int main(void) {
    cout << endl;

    int num = 3;
    cout << "Fatorial de " << num << ": " << calcularFatorial(num) << endl;

    num = 5;
    cout << "Fatorial de " << num << ": " << calcularFatorial(num) << endl;

    num = 7;
    cout << "Fatorial de " << num << ": " << calcularFatorial(num) << endl;

    cout << endl;
    return 0;
}

int calcularFatorial(int numero) {
    int soma = 0;

    for (int i = 1; i <= numero; i++)
    {
        soma += i;
    }
    
    return soma;
}