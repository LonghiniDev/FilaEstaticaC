#include "tipos.h"

void enfileirar(TFila *p)
{
	if (p->tamanhoFila < 10)
	{
		printf("\n Informe valor: ");
		scanf("%d", &p->fila[p->tamanhoFila]);
		p->tamanhoFila++;
	}
	else
	{
		printf("\n Fila cheia!");
		getch();
	}
	
}
