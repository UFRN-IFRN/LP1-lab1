//Documentar
#include "area.h"
#include <cmath>

float calcularAreaTriangulo(float base, float altura){
	return (base * altura) / 2;
}

float calcularAreaRetangulo(float base, float altura){
	return (base * altura);
}

float calcularAreaQuadrado(float lado){
	return pow(lado,2);
}

float calcularAreaCirculo(float raio){
	return 3.1415 * pow(raio,2);
}

float calcularAreaPiramide(float area_base, float area_lateral){
	return (area_base + area_lateral);
}

float calcularAreaCubo(float aresta){
	return 6 * pow(aresta,2);
}

float calcularAreaParalelepipedo(float aresta1, float aresta2, float aresta3){
	return (2 * aresta1 * aresta2) + (2 * aresta1 * aresta3) + (2 * aresta2 * aresta3);
}

float calcularAreaEsfera(float raio){
	return 4 * 3.1415 * pow(raio,2);
}
