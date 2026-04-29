#include <iostream>
#include <cmath>

// Seno
double taylor_seno(double x, int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += std::pow(-1, i) * std::pow(x, 2i+1) / std::tgamma(2i+2);
    }
    return suma;
}

// Coseno
double taylor_coseno(double x, int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += std::pow(-1, i) * std::pow(x, 2i) / std::tgamma(2i+1);
    }
    return suma;
}

// Tangente
double taylor_tangente(double x, int n) {
    return taylor_seno(x, n) / taylor_coseno(x, n);
}

// Raiz cuadrada de (1 + x)
double taylor_raiz(double x, int n) {
    double suma = 1.0;
    double termino = 1.0;
    for (int i = 1; i < n; i++) {
        termino = (0.5 - i + 1) x / i;
        suma += termino;
    }
    return suma;
}

int main() {
    double x = 0.5;
    int terminos = 10;

    std::cout << "Resultados de Series de Taylor" << std::endl;
    std::cout << "seno de "     << x << ": " << taylor_seno(x, terminos)     << std::endl;
    std::cout << "coseno de "   << x << ": " << taylor_coseno(x, terminos)   << std::endl;
    std::cout << "tangente de " << x << ": " << taylor_tangente(x, terminos) << std::endl;
    std::cout << "raiz de 1+"   << x << ": " << taylor_raiz(x, terminos)     << std::endl;

    return 0;
}
