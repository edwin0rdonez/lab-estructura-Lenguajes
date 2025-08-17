#include "facultad.h"

void ingresarDatosFacultad(Facultad *prmFacu){
	printf("\tFacultad\n");
	printf("Ingrese Codigo de la Facultad: ");
	scanf("%d",&prmFacu->codigoFacultad);
	printf("Ingrese Nombre del programa: ");
	scanf("%s",prmFacu->nombreFacultad);
	system("cls");
	printf("Programas de la Facultad\n");
	for(int i =0;i<2;i++){
		printf("Programa %d\n",i+1);
		ingresarDatosPrograma(&prmFacu->vPrograma[i]);
		printf("\n");
	}
	system("cls");
}
	void imprimirDatosFacultad(Facultad prmFacu){
		printf("\tFacultad\n");
		printf("Codigo facultad: %d\n",prmFacu.codigoFacultad);
		printf("Nombre facultad: %s\n",prmFacu.nombreFacultad);
		printf("\n");
		printf("\tProgramas de la Facultad\n");
		for(int i =0;i<2;i++){
			printf("Programa %d\n",i+1);
			imprimirDatosPrograma(prmFacu.vPrograma[i]);
			printf("\n");
		}
	}
