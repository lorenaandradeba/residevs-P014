#include <iostream>
#include <cmath>

using namespace std;

struct Ponto{
   int x, y;
};

float calcularDistanciaEntrePontos(Ponto pontoA, Ponto pontoB);
void exibeDistanciaEntrePontos();

int main(void) {
    exibeDistanciaEntrePontos();
    cout << endl << endl;
    return 0;
}

void exibeDistanciaEntrePontos() {
    Ponto ponto1, ponto2;

    ponto1.x = 3;
    ponto1.y = 5;

    ponto2.x = 6;
    ponto2.y = 1;

    cout << "\n\nDistância entre os pontos: "; 
    cout << "( " << ponto1.x << ", " << ponto1.y << " )  e  ( " << ponto2.x << ", " << ponto2.y << " ) = ";
    cout << calcularDistanciaEntrePontos(ponto1, ponto2);
}

float calcularDistanciaEntrePontos(Ponto pontoA, Ponto pontoB) {
    float pot1, pot2;
    float sub1, sub2;

    sub1 = pontoB.x - pontoA.x;
    sub2 = pontoB.y - pontoA.y;

    pot1 = pow(sub1, 2);
    pot2 = pow(sub2, 2);

    return sqrt(pot1 + pot2);
}