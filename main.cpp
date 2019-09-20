#include <iostream>

int n, m, resultado;

int main() {
    std::cout << "Introduce un numero entero: " << std::endl;
    scanf("%d", &n);
    std::cout << "Introduce un numero entero: " << std::endl;
    scanf("%d", &m);

    resultado= n+m;

    printf("El resultado de la suma es:  %d",resultado);

    return 0;
}