#include "estudiante.h"


void ingresarDatosEstudiante(Estudiante *prmEst){
	
	printf("Ingrese el codigo del estudiante: ");
	scanf("%d",&prmEst->codigo);
	while (getchar() != '\n'); 
	printf("Ingrese el nombre del estudiante: ");
	scanf("%s",prmEst->nombre);
	printf("Ingrese el apellido del estudiante: ");
	scanf("%s",prmEst->apellidos);
	do {
		printf("Ingrese el genero del estudiante. valoes validos (f o m): ");
		scanf(" %c", &prmEst->genero); 
		prmEst->genero = tolower(prmEst->genero);
	} while (prmEst->genero != 'f' && prmEst->genero != 'm');
	
	
}

void imprimirDatosEstudiante(Estudiante prmEst){
	printf("Codigo: %d\n",prmEst.codigo);
	printf("nombre: %s\n",prmEst.nombre);
	printf("Apellido: %s\n",prmEst.apellidos);
	printf("Genero: %c\n",prmEst.genero);
	
}


int contarEstudiantesFemenino(Estudiante lista[],int prmCantidad){
	int varContador=0;
	for(int i=0;i<prmCantidad;i++){
		if(tolower(lista[i].genero)=='f'){
			varContador++;
		}
	}
	return varContador;
	
}

	
