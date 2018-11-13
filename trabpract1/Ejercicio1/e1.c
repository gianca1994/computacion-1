#include <stdio.h>
#include <stdlib.h>
#include "e1head.h"

int main(){

	int dat;

	printf ("Elija una de las siguientes opciones:\n");
	printf("1- Cargar datos de profesor\n");
	printf("2- Cargar datos de alumno\n\n");
	scanf("%d", &dat);
	
	if(dat==1){
		datprof();
	}else if(dat==2){
		datalum();
	}else{
		printf("Opcion incorrecta");
	}if(dat==1){
		mostrarprof();
	}else if(dat==2){
		mostraralum();
	}
	return 0;
}
