#include <iostream>

int main() {
    double peso, altura;
    std::cout << "BIENVENIDO";
    std::cout << "Ingrese su peso en kilogramos: ";
    std::cin >> peso;

    std::cout << "Ingrese su altura en metros: ";
    std::cin >> altura;

    double imc = peso / (altura * altura);
    std::cout << "Su Indice de Masa Corporal es: " << imc << std::endl;

    if (imc < 18.5) {
        std::cout << "Tiene peso bajo." << std::endl;
    } else if (imc >= 18.5 && imc <= 24.9) {
        std::cout << "Tiene peso normal." << std::endl;
    } else if (imc >= 25.0 && imc <= 29.9) {
        std::cout << "Tiene sobrepeso." << std::endl;
    } else {
        std::cout << "Tiene obesidad." << std::endl;
    }

    return 0;
}
