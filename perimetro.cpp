//Documentar
#include "perimetro.h"

float calcularPerimetroTriangulo(float base, float lado2, float lado3){
	return base + lado2 + lado3;
}

float calcularPerimetroRetangulo(float base, float altura){
	return 2 * (base + altura);
}

float calcularPerimetroQuadrado(float lado){
	return 4 * lado;
}

float calcularPerimetroCirculo(float raio){
	return 2 * 3.1415 * raio;
}
