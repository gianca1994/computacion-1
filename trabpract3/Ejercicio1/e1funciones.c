#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "e1head.h"

struct pila *a = NULL;
struct cola *b = NULL;
struct cola *c = NULL;

void uno(char *d){
	struct pila *new;
	new = (struct pila*)malloc(sizeof(struct pila));
	new->num1 = strdup(d);
	new->sgte = NULL;

	if (a == NULL) {
		a = new;
	}else{
		new->sgte = a;
		a = new;
	}
}

struct pila* uno1(){

	struct pila *pila2;
	if (a == NULL) {
		return NULL;
	}
	pila2 = a;
	a = pila2->sgte;
	return pila2;
}

void dos(char *e){

	struct cola *agregar;
	agregar = (struct cola*)malloc(sizeof(struct cola));
	agregar->num2 = strdup(e);
	agregar->sgte2 = NULL;

	if (b == NULL) {
		b = agregar;
		c = agregar;
	}else{
		c->sgte2 = agregar;
		c = agregar;
	}
}

struct cola* dos2(){

	struct cola *cola2;

	if (b == NULL) {

		return NULL;
	}
	cola2 = b;
	b = cola2->sgte2;
	return cola2;
}
