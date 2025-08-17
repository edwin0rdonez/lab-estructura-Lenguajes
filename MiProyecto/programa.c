#include "programa.h"

void ingresarDatosPrograma(Programa *prmProg){
	printf("\tPrograma\n");
	printf("Ingrese Codigo programa: ");
	scanf("%d",&prmProg->codigo);
	printf("Ingrese Nombre del programa: ");
	scanf("%s",prmProg->nombre);
	printf("Ingrese año de creación del programa: ");
	scanf("%d",&prmProg->anioCreacion);
	system("cls");
	printf("Estudiantes del Programa\n");
	for(int i =0;i<3;i++){
		printf("Estudiante %d\n",i+1);
		ingresarDatosEstudiante(&prmProg ->vEstudiante[i]);
		printf("\n");
	}
	system("cls");
}	
void imprimirDatosPrograma(Programa prmProg){
	printf("\tPrograma\n");
		printf("Codigo programa: %d\n",prmProg.codigo);
		printf("Nombre programa: %s\n",prmProg.nombre);
		printf("Año de creación del programa: %d\n",prmProg.anioCreacion);
		printf("\n");
		printf("\tEstudiantes del Programa\n");
		
		for(int i =0;i<3;i++){
			printf("Estudiante %d\n",i+1);
			imprimirDatosEstudiante(prmProg.vEstudiante[i]);
			printf("\n");
		}
	}

