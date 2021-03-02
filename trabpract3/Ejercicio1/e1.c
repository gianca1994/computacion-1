#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "e1head.h"

int main(){

	struct pila *reemplazo;
	struct cola *reemplazo2;
	int opcion=0, i=0, j=0;
	char *numero;
	char num [1];

	printf ("¿Su numero es capicua?, ingrese 1 o 2 para continuar.\n\n");
	printf ("1- Para ingresar un numero\n");
	printf ("0- Para terminar\n\n");
	scanf ("%d", &opcion);

	while (opcion !=0){

		system ("clear");
		printf("Ingrese un numero:\n");
		scanf ("%s", num);
		numero = strdup (num);
		uno(numero);
		dos(numero);
		printf ("Para agregar otro numero, presine 1, sino presione 0 para terminar.\n\n");
		scanf ("%d", &opcion);
		i++;
	}

	reemplazo = uno1();
	reemplazo2 = dos2();

	while (reemplazo !=NULL && reemplazo2 !=NULL){

		if (strcmp(reemplazo->num1, reemplazo2->num2) == 0){
		j++;
		}
	reemplazo = uno1();
	reemplazo2 = dos2();
	}

	if (i == j && i != 0 && j != 0) {
	printf ("\nES CAPICUA!!\n");
	}else if (i != j){
	printf ("\nNO ES CAPICUA!!\n");
	}else printf("\nADIOS\n");
	return 0;
}

