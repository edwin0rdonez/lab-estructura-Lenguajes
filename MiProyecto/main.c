#include "estudiante.h"
#include "Programa.h"
#include "facultad.h"
int main(){
	/*Estudiante vEstudiante[3];
	for(int i=0;i<3;i++){
		printf("Estudiante %d\n",i+1);
		ingresarDatosEstudiante(&vEstudiante[i]);
		system("cls");
	}
	for(int i=0;i<3;i++){
		printf("Estudiante %d\n",i+1);
		imprimirDatosEstudiante(vEstudiante[i]);
		printf("\n");
	}
	
	int varTotalF=contarEstudiantesFemenino(vEstudiante,3);
	printf("Cantidad de estudiantes de genero femenino: %d\n", varTotalF);
	
	*/
	
	/*Programa varPrograma;
	ingresarDatosPrograma(&varPrograma);
	imprimirDatosPrograma(varPrograma);
	*/
	Facultad varFacultad;
	ingresarDatosFacultad(&varFacultad);
	imprimirDatosFacultad(varFacultad);
	return 0;
}
