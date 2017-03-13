#include <iostream>

#include "calcarea.h"

using std::cin;
using std::cout;
using std::endl;

void mostrarAreaTriangulo(float altura, float base){
    cout << "Área do triângulo: " << calcularAreaTriangulo(base, altura) << endl;
}

void mostrarAreaRetangulo(float base, float altura){
    cout << "Área do retângulo: " << calcularAreaRetangulo(base, altura) << endl;
}

void mostrarAreaQuadrado(float lado){
    cout << "Área do quadrado: " << calcularAreaQuadrado(lado) << endl; 
}

void mostrarAreaCirculo(float raio){
    cout << "Área do círculo: " << calcularAreaCirculo(raio) << endl;
}

void mostrarAreaPiramide(float area_base, float area_lateral){
    cout << "Área da pirâmide: " << calcularAreaPiramide(area_base, area_lateral) << endl;
}

void mostrarAreaCubo(float aresta){
    cout << "Área do cubo: " << calcularAreaCubo(aresta) << endl;
}

void mostrarAreaParalelepipedo(float aresta1, float aresta2, float aresta3){
    cout << "Área do paralelepípedo: " << calcularAreaParalelepipedo(aresta1, aresta2, aresta3) << endl;
}

void mostrarAreaEsfera(float raio){
    cout << "Área da esfera: " << calcularAreaEsfera(raio) << endl;
}
