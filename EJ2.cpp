#include <iostream>
#include <list>
#include <stack>

int main() {
    std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::stack<float, std::list<float>> pila(lista);
    std::cout << "Pila inicial:" << std::endl;
    while (!pila.empty()) {
        std::cout << pila.top() << std::endl;
        pila.pop();
    }
    pila.push(6.6);
    pila.push(7.7);
    pila.push(8.8);
    std::cout << "\nPila después de agregar elementos:" << std::endl;
    while (!pila.empty()) {
        std::cout << pila.top() << std::endl;
        pila.pop();
    }
    return 0;
}
