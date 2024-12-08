#include <iostream>
using namespace std;

int main() {
    float numero1, numero2;

    std::cout << "Escribe el primero número: ";
    std::cin >> numero1;

    std::cout << "Escribe el segundo número: ";
    std::cin >> numero2;

    float suma = numero1 + numero2;
    float resta = numero1 - numero2;
    float multiplicacion = numero1 * numero2;
    float division = numero1 / numero2;

    std::cout << "La suma es: " << suma << std::endl;
    std::cout << "La resta es: " << resta << std::endl;
    std::cout << "La multiplicación es: " << multiplicacion << std::endl;
    std::cout << "La división es: " << division << std::endl;

    return 0;
}

