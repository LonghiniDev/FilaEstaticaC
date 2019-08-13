#include "tipos.h"

void desenfileirar (TFila *p)
{
	if (p->tamanhoFila > 0)
	{
		for (int i = 0; i < p->tamanhoFila-1; i++)
		{
			p->fila[i] = p->fila[i+1];
		}
		p->tamanhoFila--;
	}
	else
	{
		printf("\n Fila vazia!");
	}
}
