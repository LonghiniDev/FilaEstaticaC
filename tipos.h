#ifndef _tipos_
#define _tipos_

#include <conio.h>
#include <stdio.h>

typedef struct tipoFila
{
	int fila[10];
	int tamanhoFila;
}TFila;

void inicializarFila(TFila *p);
void enfileirar(TFila *p);
void desenfileirar(TFila *p);
void apresentarFila(TFila *p);

#endif

