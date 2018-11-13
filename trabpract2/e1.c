#include <stdio.h>
#include <stdlib.h>
#include "e1head.h"

int main (){
	char caract;
	char texto[200];
	char *string, *found, *persona1, *persona2, *persona3;
	int i;
	int j;
	char ubic[] = "/home/gianca/computacion1/TPN2/archivocsv.txt";
	fd = fopen (ubic, "r");
	while ((caract = fgetc(fd)) != EOF){

		texto[j] = caract;
		j++;
	}
	fclose(fd);
	string = strdup(texto);

	while ((found = strsep (&string, "\n")) != NULL){

		if (i==0){
			persona1 = strdup(found);
		}else if (i==1){
			persona2 = strdup(found);
		}else if (i==2){
			persona3 = strdup(found);
		}
		i++;
	}
	pars(persona1);
	pars(persona2);
	pars(persona3);

	printf ("Se parseo el archivo CSV!!\n");
	most();
	crearJSON();

	return 0;
}
