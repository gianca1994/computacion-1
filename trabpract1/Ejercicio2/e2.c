#include <stdio.h>
#include <stdlib.h>

void ord (int a [], int b){
	int *px;
	int i, j, aux=0;
	px=&a[0];
	for (i=1;i<b;i++){
		for(j=0;j<b-i;j++){
			if (*(px+j)>*(px+(j+1))){
			aux=*(px+j);
			*(px+j)=*(px+(j+1));
			*(px+(j+1))=aux;

			}
		}
	}
	i=0;

	printf ("\nEl vector ordenado nos quedaria:\n");
	for(i=0;i<b;i=i+1)
		printf ("%d\n\n", a[i]);
	}

	int main(){
	int cant_num, vec;
	int *i;

	printf ("Ingrese los elementos del vector: ");
	scanf("%d", &cant_num);
	i=(int*)malloc(cant_num*sizeof(int));
	printf("Ingrese los numeros del vector:\n");
	for (vec=0; vec<cant_num; vec++)
	scanf ("%d", &i[vec]);
	ord(i,cant_num);
	free(i);

	return 0;
}
