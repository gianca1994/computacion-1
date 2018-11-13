#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "e1head.h"

void add(char *a, char *b, char *c){

	struct datos *agregar;
	agregar = (struct datos*)malloc(sizeof(struct datos));

	strcpy(agregar->nom,a);
	strcpy(agregar->cuil,b);
	strcpy(agregar->categoria,c);

	agregar->sgt = NULL;

	if (lista == NULL) {
		lista = agregar;
		ultimo = agregar;
	}else{
		ultimo->sgt = agregar;
		ultimo = agregar;
	}
}

void most(){
	
	struct datos *sgte;
	sgte = lista;

	while(sgte !=NULL);
	printf("%s\n", sgte->nom);
	printf("%s\n", sgte->cuil);
	printf("%s\n", sgte->categoria);
	sgte = sgte->sgt;
}

void pars(char *uno){

	char *a, *b, *c, *d;
	int i;
	d=strtok(uno,",");

	while(d != NULL){
		if (i == 0) {
			a = strdup (d);
		}else if (i == 1) {
			b = strdup (d);
		}else if (i == 2) {
			c = strdup (d);
		}
		i++;
		d=strtok(NULL,",");
	}
	i=0;
	add(a,b,c);
}

void crearJSON(){
	char ubic[] = "/home/gianca/computacion1/TPN2/JSON.txt";

	struct datos *sgte2;
	sgte2 = lista;
	fd2 = fopen (ubic,"w");

	if(fd2 == NULL){
		printf ("No se pudo crear el archivo...");
	}else{
		printf("Se genero el archivo JSON...");
		printf("Se guardo en: %s", ubic);
	}
	fprintf (fd2, "[\n");

	while (sgte2 != NULL){
		fprintf(fd2, "{%c%cnombre%c:%c%s%c,%ccuit%c:%c%s%c,%ccategoria%c:%c%s%c},\n\n",34,34,34,sgte2->nom,34,34,34,34,sgte2->cuil,34,34,34,34,sgte2->categoria,34);
		sgte2 = sgte2->sgt;
	}
	fprintf(fd2, "\n]");
	fclose(fd2);
}
