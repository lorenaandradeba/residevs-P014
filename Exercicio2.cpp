#include <iostream>

using namespace std;

int converterCelsiusParaFahrenheit(int grausCelsius);
void conversaoDeTemperatura();

int main(void) {
    cout << endl;
    conversaoDeTemperatura();
    cout << endl;
    return 0;
}

void conversaoDeTemperatura() {
    float temperatura = 10;
    cout << temperatura << " Celsius equivale a " << converterCelsiusParaFahrenheit(temperatura) << " Fahrenheit." << endl;

    temperatura = 40;
    cout << temperatura << " Celsius equivale a " << converterCelsiusParaFahrenheit(temperatura) << " Fahrenheit." << endl;

    temperatura = -5;
    cout << temperatura << " Celsius equivale a " << converterCelsiusParaFahrenheit(temperatura) << " Fahrenheit." << endl;
}

int converterCelsiusParaFahrenheit(int grausCelsius) {
    return (9 * grausCelsius / 5) + 32;
}