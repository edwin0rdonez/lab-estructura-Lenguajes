#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char placa[20];
	char marca[20];
	int modelo;
} carro;

typedef struct {
	int nit;
	char nombre[30];
	carro vCarro[2];
} compraventa;

void ingresarDatosCarro(carro *c) {
	printf("Ingrese placa del carro: ");
	scanf("%s", c->placa);
	printf("Ingrese marca del carro: ");
	scanf("%s", c->marca);
	printf("Ingrese modelo del carro: ");
	scanf("%d", &c->modelo);
}

void imprimirDatosCarro(carro c) {
	printf("\nInformación carro\n");
	printf("Placa: %s\n", c.placa);
	printf("Marca: %s\n", c.marca);
	printf("Modelo: %d\n", c.modelo);
}

void ingresarDatosCompraventa(compraventa *com) {
	printf("Ingrese Nit: ");
	scanf("%d", &com->nit);
	printf("Ingrese nombre: ");
	scanf("%s", com->nombre);
	for (int i = 0; i < 2; i++) {
		ingresarDatosCarro(&com->vCarro[i]);
	}
}

void imprimirDatosCompraventa(compraventa com) {
	printf("\nNit: %d\n", com.nit);
	printf("Nombre: %s\n", com.nombre);
	for (int i = 0; i < 2; i++) {
		imprimirDatosCarro(com.vCarro[i]);
	}
}

int main() {
	compraventa varCompraventa;
	ingresarDatosCompraventa(&varCompraventa);
	imprimirDatosCompraventa(varCompraventa);
	return 0;
}
