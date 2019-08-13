#include "tipos.h"

int main()
{
	int opcao;
	
	TFila F;
	
	inicializarFila(&F);
	
	do
	{
		printf("\n 1 - Enfileirar");
		printf("\n 2 - Desenfileirar");
		printf("\n 3 - Apresentar Fila");
		printf("\n Escolha uma opcao: ");
		scanf("%d", &opcao);
		switch(opcao)
		{
			case 1: enfileirar(&F); break;
			case 2: desenfileirar(&F); break;
			case 3: apresentarFila(&F); break;
		}
	}while (opcao != 0);
}
