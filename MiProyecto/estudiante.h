#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
typedef struct{
	int codigo;
	char nombre[30];
	char apellidos[30];
	char genero;
}Estudiante;

void ingresarDatosEstudiante(Estudiante *prmEst);
void imprimirDatosEstudiante(Estudiante prmEst);
int contarEstudiantesFemenino(Estudiante lista[],int prmCantidad);

#endif

