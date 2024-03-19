#include <iostream>
#include <string>

int main() {
    std::string original, invertida;

    // Solicita que o usuário informe a string
    std::cout << "Informe uma string: ";
    std::getline(std::cin, original);

    // Inverte os caracteres da string
    for (int i = original.length() - 1; i >= 0; i--) {
        invertida += original[i];
    }

    // Exibe a string invertida
    std::cout << "String invertida: " << invertida << std::endl;

    return 0;
}

