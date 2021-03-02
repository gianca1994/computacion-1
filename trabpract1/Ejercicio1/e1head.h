struct persona{
	int dni;
	char correo[40];
};
struct prof{
	char nomprof [20];
	char approf [20];
	struct persona info;
};
struct alum{
	char nomalum[20];
	char apalum[20];
	struct persona info;
};
void datprof();
void mostrarprof();
void datalum();
void mostraralum();
