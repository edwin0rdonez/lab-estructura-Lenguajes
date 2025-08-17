#ifndef PROGRAMA_H
#define PROGRAMA_H

#include "estudiante.h"

typedef struct{
	int codigo;
	char nombre[30];
	int anioCreacion;
	Estudiante vEstudiante[3];
}Programa;

void ingresarDatosPrograma(Programa *prmProg);
void imprimirDatosPrograma(Programa prmProg);


#endif
