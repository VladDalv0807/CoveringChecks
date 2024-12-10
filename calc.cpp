#include <iostream>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "zero didivid" << std::endl;
        return 0; 
    }
}

int main() {
    int x = 123, y = 0;
    
    std::cout << "Сложение: " << add(x, y) << std::endl;
    std::cout << "Вычет: " << subtract(x, y) << std::endl;
    
    std::cout << "Умножение: " << multiply(x, y) << std::endl;
    std::cout << "Деление: " << divide(x, y) << std::endl;
    
    return 0;
}
