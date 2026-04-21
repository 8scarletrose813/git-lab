#include "Interface.h"
#include <iostream>

void Interface::start() {
    double n1, n2;
    char op;

    std::cout << "Введіть приклад (напр. 2 + 2): ";
    if (!(std::cin >> n1 >> op >> n2)) return;

    if (op == '+') std::cout << "Разом: " << calc.add(n1, n2) << std::endl;
    else if (op == '-') std::cout << "Різниця: " << calc.subtract(n1, n2) << std::endl;
    else if (op == '*') std::cout << "Добуток: " << calc.multiply(n1, n2) << std::endl;
    else if (op == '/') {
        if (n2 != 0) std::cout << "Частка: " << calc.divide(n1, n2) << std::endl;
        else std::cout << "Помилка: ділення на 0!" << std::endl;
    }
}