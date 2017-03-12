#include "medidas.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void informarMedidasTriangulo(float altura, float base, float lado2, float lado3){
    cout << "Digite o tamanho da altura do triângulo equilátero: " << endl;
    cin >> altura;
    cout << "Digite o tamanho da base (1º lado) do triângulo equilátero: " << endl;
    cin >> base;
    cout << "Digite o tamanho do 2º lado do triângulo equilátero: " << endl;
    cin >> lado2;
    cout << "Digite o tamanho do 3º lado do triângulo equilátero: " << endl;
    cin >> lado3;
    mostrarAreaTriangulo(altura, base);
    mostrarPerimetroTriangulo(base, lado2, lado3);
}

void informarMedidasRetangulo(float base, float altura){
    cout << "Digite o tamanho da base do retângulo: " << endl;
    cin >> base;
    cout << "Digite o tamanho da altura do retângulo: " << endl;
    cin >> altura;
    mostrarAreaRetangulo(base, altura);
    mostrarPerimetroRetangulo(base, altura);
}

void informarMedidasQuadrado(float lado){
    cout << "Digite o tamanho de um lado do quadrado: " << endl;
    cin >> lado;
    mostrarAreaQuadrado(lado);  
    mostrarPerimetroQuadrado(lado); 
}

void informarMedidasCirculo(float raio){
    cout << "Digite o tamanho do raio do círculo: " << endl;
    cin >> raio;
    mostrarAreaCirculo(raio);
    mostrarPerimetroCirculo(raio);
}

void informarMedidasPiramide(float altura, float area_base, float area_lateral){
    cout << "Digite a altura da pirâmide: " << endl;
    cin >> altura;
    cout << "Digite a área da base da pirâmide: " << endl;
    cin >> area_base;
    cout << "Digite a área lateral de uma lateral da pirâmide: " << endl;
    cin >> area_lateral;
    mostrarAreaPiramide(area_base, area_lateral);
    mostrarVolumePiramide(area_base, altura);
}

void informarMedidasCubo(float aresta){
    cout << "Digite o tamanho de uma aresta do cubo: " << endl;
    cin >> aresta;
    mostrarAreaCubo(aresta);
    mostrarVolumeCubo(aresta);
}

void informarMedidasParalelepipedo(float aresta1, float aresta2, float aresta3){
    cout << "Digite o tamanho da 1ª aresta do paralelepípedo: " << endl;
    cin >> aresta1;
    cout << "Digite o tamanho da 2ª aresta do paralelepípedo: " << endl;
    cin >> aresta2;
    cout << "Digite o tamanho da 3ª aresta do paralelepípedo: " << endl;
    cin >> aresta3;
    mostrarAreaParalelepipedo(aresta1, aresta2, aresta3);
    mostrarVolumeParalelepipedo(aresta1, aresta2, aresta3);
}

void informarMedidasEsfera(float raio){
    cout << "Digite o tamanho do raio da esfera: " << endl;
    cin >> raio;
    mostrarAreaEsfera(raio);
    mostrarVolumeEsfera(raio);
}

void escolherFigura(){
    int opcao;
    float base = 0, altura = 0, lado = 0, lado2 = 0, lado3 = 0, raio = 0, area_base = 0, area_lateral = 0, aresta = 0, aresta1 = 0, aresta2 = 0, aresta3 = 0;
    
    cout << "\nCalculadora de Geometria Plana e Espacial\n"
    "(1) Triangulo equilatero\n"
    "(2) Retangulo\n"
    "(3) Quadrado\n" 
    "(4) Circulo\n"
    "(5) Piramide com base quadrangular\n" 
    "(6) Cubo\n" 
    "(7) Paralelepipedo\n" 
    "(8) Esfera\n" 
    "(0) Sair\n\n" 
    "Digite a sua opção: ";
    cin >> opcao;
    switch(opcao) {
        
        case 1: 
            informarMedidasTriangulo(altura, base, lado2, lado3);
            escolherFigura();
        break;

        case 2: 
            informarMedidasRetangulo(base, altura);
            escolherFigura();
        break;

        case 3: 
            informarMedidasQuadrado(lado);
            escolherFigura();
        break;

        case 4: 
            informarMedidasCirculo(raio);
            escolherFigura();
        break;

        case 5: 
            informarMedidasPiramide(altura, area_base, area_lateral);
            escolherFigura();
        break;

        case 6: 
            informarMedidasCubo(aresta);
            escolherFigura();
        break;

        case 7: 
            informarMedidasParalelepipedo(aresta1, aresta2, aresta3);
            escolherFigura();
        break;

        case 8: 
            informarMedidasEsfera(raio);
            escolherFigura();
        break;

        case 0: 
            break;

        default:
            cout << "Opção inválida. Por favor, tente novamente com alguma opção presente na lista." << endl;
            escolherFigura();
        break;
    }
}