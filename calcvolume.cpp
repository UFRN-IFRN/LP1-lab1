#include "calcvolume.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

float altura, raio,  area_base, aresta, aresta1, aresta2, aresta3; 

void informarMedidasVolumePiramide(){
	cout << "Digite a área da base da pirâmide: " << endl;
    cin >> area_base;
    cout << "Digite a altura da pirâmide: " << endl;
    cin >> altura;
    cout << "Volume da pirâmide: " << calcularVolumePiramide(area_base, altura) << endl;
}

void informarMedidasVolumeCubo(){
    cout << "Digite o tamanho de uma aresta do cubo: " << endl;
    cin >> aresta;
    cout << "Volume do cubo: " << calcularVolumeCubo(aresta) << endl;
}

void informarMedidasVolumeParalelepipedo(){
    cout << "Digite o tamanho da 1ª aresta do paralelepípedo: " << endl;
    cin >> aresta1;
    cout << "Digite o tamanho da 2ª aresta do paralelepípedo: " << endl;
    cin >> aresta2;
    cout << "Digite o tamanho da 3ª aresta do paralelepípedo: " << endl;
    cin >> aresta3;
    cout << "Volume do paralelepípedo: " << calcularVolumeParalelepipedo(aresta1, aresta2, aresta3) << endl;
}

void informarMedidasVolumeEsfera(){
	cout << "Digite o tamanho do raio da esfera: " << endl;
    cin >> raio;
    cout << "Volume da esfera: " << calcularVolumeEsfera(raio) << endl;
}