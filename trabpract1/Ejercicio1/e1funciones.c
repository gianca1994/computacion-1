#include <stdio.h>
#include "e1head.h"

struct alum varalum;
struct prof varprof;

void datprof(){
	printf("\nIngrese el Nombre del profesor: ");
	scanf("%s", varprof.nomprof);
	printf("Ingrese el apellido del profesor: ");
	scanf("%s", varprof.approf);
	printf("Ingrese DNI del profesor: ");
	scanf("%d", &varprof.info.dni);
	printf("Ingrese correo del profesor: ");
	scanf("%s", varprof.info.correo);
}
void datalum(){
	printf("\nIngrese el Nombre del alumno:");
	scanf("%s", varalum.nomalum);
	printf("Ingrese el Apellido del alumno:");
	scanf("%s", varalum.apalum);
	printf("Ingrese el DNI del alumno:");
	scanf("%d", &varalum.info.dni);
	pintf("Ingrese el correo del alumno:");
	scanf("%s", varalum.info.correo);
}
void mostrarprof(){
	printf("\nDatos del profesor ingresados:\n");
	printf("Nombre: %s\n", varprof.nomprof);
	printf("Apellido: %s\n", varprof.approf);
	printf("DNI: %d\n", varprof.info.dni);
	printf("Correo: %s\n", varprof.info.correo);
}
void mostraralum(){
	printf("\nDatos del alumno ingresados:\n");
	printf("Nombre: %s\n", varalum.nomalum);
	printf("Apellido: %s\n", varalum.apalum);
	printf("DNI: %d\n", varalum.info.dni);
	printf("Correo: %s\n", varalum.info.correo);
}
