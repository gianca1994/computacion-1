#ifndef e1head_h
#define e1head_h

struct pila{
	char *num1;
	struct pila *sgte;

};
struct cola{
	char *num2;
	struct cola *sgte2;

};
void uno(char *d);
struct pila* uno1();

void dos(char *e);
struct cola* dos2();
#endif
