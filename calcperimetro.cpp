#include "calcperimetro.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void mostrarPerimetroTriangulo(float base, float lado2, float lado3){
    cout << "Perímetro do triângulo: " << calcularPerimetroTriangulo(base, lado2, lado3) << endl;
}

void mostrarPerimetroRetangulo(float base, float altura){
    cout << "Perímetro do retângulo: " << calcularPerimetroRetangulo(base, altura) << endl;
}

void mostrarPerimetroQuadrado(float lado){ 
    cout << "Perímetro do quadrado: " << calcularPerimetroQuadrado(lado) << endl;
}

void mostrarPerimetroCirculo(float raio){
    cout << "Perímetro do círculo: " << calcularPerimetroCirculo(raio) << endl;
}
