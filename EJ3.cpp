#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};
    std::sort(numeros.begin(), numeros.end());
    std::cout << "Elementos ordenados:" << std::endl;
    for (int num : numeros) {
        std::cout << num << std::endl;
    }
    if (!numeros.empty()) {
        int maxNum = *std::max_element(numeros.begin(), numeros.end());
        std::cout << "Número máximo: " << maxNum << std::endl;
    } else {
        std::cout << "El vector está vacío." << std::endl;
    }

    return 0;
}