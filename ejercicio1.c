#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char nombres[30];
	char apellidos[30];
	int edad;
	char profesion[30];
	char fechaNac[30];
}Persona;

void ingresarDatos(Persona *p){
	printf("Ingrese Nombres: ");
	fgets(p->nombres,30,stdin);
	printf("Ingrese Apellidos: ");
	fgets(p->apellidos,30,stdin);
	printf("Ingrese Edad: ");
	scanf("%d",&p->edad);
	while (getchar() != '\n'); // limpiar buffer
	printf("Ingresa Profesion:");
	fgets(p->profesion,30,stdin);
	printf("Ingresa Fecha de Nacimiento: ");
	fgets(p->fechaNac,30,stdin);
}

void imprimirDatos(Persona p){
	printf("Nombres: %s",p.nombres);
	printf("Apellidos: %s",p.apellidos);
	printf("Edad: %d",p.edad);
	printf("Profesion: %s ",p.profesion);
	printf("Fecha de Nacimiento: %s",p.fechaNac);
	
}
int main(int argc, char *argv[]) {
	Persona varPersona[3];
	for(int i=0;i<3;i++){
		printf("Persona (%d)\n",i+1);
		ingresarDatos(&varPersona[i]);	
		system("cls");
	}
	for(int i=0;i<3;i++){
		printf("Persona (%d)\n",i+1);
		imprimirDatos(varPersona[i]);	
		printf("\n");
	}
	
	return 0;
}

