#include <iostream>


bool verificaFibonacci(int num) {
    int a = 0, b = 1, c = 0;
    
    while (c < num) {
        c = a + b;
        a = b;
        b = c;
    }
    
    if (c == num)
        return true;
    else
        return false;
}

int main() {
    int num;

    std::cout << "Informe um numero: ";
    std::cin >> num;

    if (verificaFibonacci(num))
        std::cout << num << " pertence a sequencia de Fibonacci." << std::endl;
    else
        std::cout << num << " nao pertence a sequencia de Fibonacci." << std::endl;

    return 0;
}

