#include <iostream>
#include <iomanip>

using namespace std;

float converterTemperatura(float temperatura);
int inserirGrausCelcius();

int main()
{
    inserirGrausCelcius();
}

float converterTemperatura(float temperatura)
{

    float f;

    f = (temperatura * 1.8) + 32;

    return f;
}

int inserirGrausCelcius(){

    float temperatura;

    cout << "Insira a temperatura (em °C): ";
    cin >> temperatura;

    cout << "°" << temperatura << " convertido para Fahrenheit: "
         << "°" << converterTemperatura(temperatura);

    return 0;

}
