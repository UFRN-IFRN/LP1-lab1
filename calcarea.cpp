#include "calcarea.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

float base, altura, raio, lado, area_base, area_lateral, aresta, aresta1, aresta2, aresta3; 

void informarMedidasAreaTriangulo(){
    cout << "Digite o tamanho da altura do triângulo equilátero: " << endl;
    cin >> altura;
    cout << "Digite o tamanho da base (1º lado) do triângulo equilátero: " << endl;
    cin >> base;
    cout << "Área do triângulo: " << calcularAreaTriangulo(base, altura) << endl;
}

void informarMedidasAreaRetangulo(){
    cout << "Digite o tamanho da base do retângulo: " << endl;
    cin >> base;
    cout << "Digite o tamanho da altura do retângulo: " << endl;
    cin >> altura;
    cout << "Área do retângulo: " << calcularAreaRetangulo(base, altura) << endl;
}

void informarMedidasAreaQuadrado(){
    cout << "Digite o tamanho de um lado do quadrado: " << endl;
    cin >> lado;   
    cout << "Área do quadrado: " << calcularAreaQuadrado(lado) << endl; 
}

void informarMedidasAreaCirculo(){
    cout << "Digite o tamanho do raio do círculo: " << endl;
    cin >> raio;
    cout << "Área do círculo: " << calcularAreaCirculo(raio) << endl;
}

void informarMedidasAreaPiramide(){
	cout << "Digite a área da base da pirâmide: " << endl;
    cin >> area_base;
    cout << "Digite a área lateral de uma lateral da pirâmide: " << endl;
    cin >> area_lateral;
    cout << "Área da pirâmide: " << calcularAreaPiramide(area_base, area_lateral) << endl;
}

void informarMedidasAreaCubo(){
    cout << "Digite o tamanho de uma aresta do cubo: " << endl;
    cin >> aresta;
    cout << "Área do cubo: " << calcularAreaCubo(aresta) << endl;
}

void informarMedidasAreaParalelepipedo(){
    cout << "Digite o tamanho da 1ª aresta do paralelepípedo: " << endl;
    cin >> aresta1;
    cout << "Digite o tamanho da 2ª aresta do paralelepípedo: " << endl;
    cin >> aresta2;
    cout << "Digite o tamanho da 3ª aresta do paralelepípedo: " << endl;
    cin >> aresta3;
    cout << "Área do paralelepípedo: " << calcularAreaParalelepipedo(aresta1, aresta2, aresta3) << endl;
}

void informarMedidasAreaEsfera(){
	cout << "Digite o tamanho do raio da esfera: " << endl;
    cin >> raio;
    cout << "Área da esfera: " << calcularAreaEsfera(raio) << endl;
}