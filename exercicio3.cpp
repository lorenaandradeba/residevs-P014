#include <iostream>
#include <cmath>

// Definindo a struct Ponto para representar as coordenadas (x, y)
struct Ponto {
    double x;
    double y;
};

// Função para calcular a distância entre dois pontos
double calcularDistancia(Ponto ponto1, Ponto ponto2) {
    double diferencaX = ponto1.x - ponto2.x;
    double diferencaY = ponto1.y - ponto2.y;
    return std::sqrt(diferencaX * diferencaX + diferencaY * diferencaY);
}

int main() {
    // Solicitando as coordenadas dos pontos ao usuário
    Ponto pontoA;
    Ponto pontoB;

    std::cout << "Digite as coordenadas do primeiro ponto (x y): ";
    std::cin >> pontoA.x >> pontoA.y;

    std::cout << "Digite as coordenadas do segundo ponto (x y): ";
    std::cin >> pontoB.x >> pontoB.y;

    // Calculando a distância entre os pontos
    double distancia = calcularDistancia(pontoA, pontoB);

    // Exibindo a distância
    std::cout << "A distância entre os pontos é: " << distancia << std::endl;

    return 0;
}
