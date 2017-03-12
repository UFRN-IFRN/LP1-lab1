#include "calcvolume.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void mostrarVolumePiramide(float area_base, float altura){
    cout << "Volume da pirâmide: " << calcularVolumePiramide(area_base, altura) << endl;
}

void mostrarVolumeCubo(float aresta){
    cout << "Volume do cubo: " << calcularVolumeCubo(aresta) << endl;
}

void mostrarVolumeParalelepipedo(float aresta1, float aresta2, float aresta3){
    cout << "Volume do paralelepípedo: " << calcularVolumeParalelepipedo(aresta1, aresta2, aresta3) << endl;
}

void mostrarVolumeEsfera(float raio){
    cout << "Volume da esfera: " << calcularVolumeEsfera(raio) << endl;
}
