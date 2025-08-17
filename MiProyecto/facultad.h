#ifndef FACULTAD_H
#define FACULTAD_H

#include "programa.h"

typedef struct{
	int codigoFacultad;
	char nombreFacultad[30];
	Programa vPrograma[2];
		
}Facultad;

void ingresarDatosFacultad(Facultad *prmFacu);
void imprimirDatosFacultad(Facultad prmFacu);


#endif
