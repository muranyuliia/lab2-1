#include <iostream>
#include <cmath>

int main() {
    double m;
    double z1, z2;

    // Крок 1: Введення значення m з клавіатури
    std::cout << "Введіть значення m: ";
    std::cin >> m;

    // Крок 2: Обчислення значення z1 за формулою
    z1 = (sqrt(pow(3 * m + 2, 2) - 24 * m)) / ((3 * sqrt(m)) - (2 / sqrt(m)));


    // Крок 3: Обчислення значення z2 за формулою
   // z2 = sqrt(m);

    // Крок 4: Виведення значення z1
    std::cout << "За формулою z1: " << z1 << std::endl;

    // Крок 5: Виведення значення z2
    std::cout << "За формулою z2: " << z2 << std::endl;

    return 0;
}