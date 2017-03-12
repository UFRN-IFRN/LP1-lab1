#include "calcperimetro.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

float base, altura, raio, lado, lado2, lado3; 

void informarMedidasPerimetroTriangulo(){
    cout << "Digite o tamanho da base (1º lado) do triângulo equilátero: " << endl;
    cin >> base;
    cout << "Digite o tamanho do 2º lado do triângulo equilátero: " << endl;
    cin >> lado2;
    cout << "Digite o tamanho do 3º lado do triângulo equilátero: " << endl;
    cin >> lado3;
    cout << "Perímetro do triângulo: " << calcularPerimetroTriangulo(base, lado2, lado3) << endl;
}

void informarMedidasPerimetroRetangulo(){
    cout << "Digite o tamanho da base do retângulo: " << endl;
    cin >> base;
    cout << "Digite o tamanho da altura do retângulo: " << endl;
    cin >> altura;
    cout << "Perímetro do retângulo: " << calcularPerimetroRetangulo(base, altura) << endl;
}

void informarMedidasPerimetroQuadrado(){
    cout << "Digite o tamanho de um lado do quadrado: " << endl;
    cin >> lado;   
    cout << "Perímetro do quadrado: " << calcularPerimetroQuadrado(lado) << endl;
}

void informarMedidasPerimetroCirculo(){
    cout << "Digite o tamanho do raio do círculo: " << endl;
    cin >> raio;
    cout << "Perímetro do círculo: " << calcularPerimetroCirculo(raio) << endl;
}