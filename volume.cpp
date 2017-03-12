#include "volume.h"
#include <cmath>

float calcularVolumePiramide(float area_base, float altura){
	return (area_base * altura) / 3;
}

float calcularVolumeCubo(float aresta){
	return pow(aresta,3);
}

float calcularVolumeParalelepipedo(float aresta1, float aresta2, float aresta3){
	return aresta1 * aresta2 * aresta3;
}

float calcularVolumeEsfera(float raio){
	return 4 * 3.1415 * pow(raio,3) / 3;
}