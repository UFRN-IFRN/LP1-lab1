#ifndef MEDIDAS_H
#define MEDIDAS_H

#include "calcarea.h"
#include "calcperimetro.h"
#include "calcvolume.h"

void informarMedidasTriangulo(float altura, float base, float lado2, float lado3);
void informarMedidasRetangulo(float base, float altura);
void informarMedidasQuadrado(float lado);
void informarMedidasCirculo(float raio);
void informarMedidasPiramide(float altura, float area_base, float area_lateral);
void informarMedidasCubo(float aresta);
void informarMedidasParalelepipedo(float aresta1, float aresta2, float aresta3);
void informarMedidasEsfera(float raio);
void escolherFigura();

#endif