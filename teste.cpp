#include "area.h"
#include "perimetro.h"
#include "volume.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){

    int opcao; 
    float base = 0, altura = 0, lado = 0, lado2 = 0, lado3 = 0, raio = 0, area_base = 0, area_lateral = 0, aresta = 0, aresta1 = 0, aresta2 = 0, aresta3 = 0;

    cout << "Calculadora de Geometria Plana e Espacial\n"
    "(1) Triangulo equilatero\n"
    "(2) Retangulo\n"
    "(3) Quadrado\n" 
    "(4) Circulo\n"
    "(5) Piramide com base quadrangular\n" 
    "(6) Cubo\n" 
    "(7) Paralelepipedo\n" 
    "(8) Esfera\n" 
    "(0) Sair\n\n" 
    "Digite a sua opcao: ";
    cin >> opcao;

return 0;
}
