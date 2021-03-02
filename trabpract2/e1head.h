#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dat{

	char nom[25];
	char cuil[20];
	char categoria[2];
	struct datos *sgt;
};

struct datos *lista = NULL;
struct datos *ultimo = NULL;

FILE *fd;
FILE *fd2;


