#define _CRT_SECURE_NO_WARNINGS		
#include <stdio.h>

struct Cliente
{
		
	char nome[100];
	char email[100];
	
};



int main(void) {

	struct Cliente clientes[100];
	int opcao, numClientes=0;

	do {

		printf("PROGRAMA DE CADASTRO DE CLIENTES\n================================ \n\n");
		printf("Opcoes disponiveis:\n\n");
		printf("1: Adcionar cliente\n");
		printf("2: Visualizar cliente\n");
		printf("3: Editar cliente\n");
		printf("4: Excluir cliente\n");
		printf("5: Finalizar programa\n\n");
		printf("Selecione uma opcao: ");

		scanf("%d", &opcao);

		switch (opcao) {

		case 1: {

			getchar(); //// Limpa o buffer do teclado

			printf("\nDigite o nome do cliente: ");
			fgets(clientes[numClientes].nome, 100, stdin);

			printf("Digite o e-mail do cliente: ");
			fgets(clientes[numClientes].email, 100, stdin);

			numClientes++;

			printf("\nCliente cadastrado com sucesso!\n\n");

			break;
		}

		case 2: {

			printf("\nClientes cadastrados: \n\n");

			for (int i = 0; i < numClientes; i++) {
				printf("Numero de resgistro do cliente: %d\n=========================================\n", i);
				printf("Nome: %s\n", clientes[i].nome);
				printf("E-mail: %s\n", clientes[i].email);
				printf("=========================================\n\n");


			}
			break;
		}
		case 3: {

			char nome[100];
			getchar();
			printf("\nDigite o nome do Cliente que deseja editar: ");
			fgets(nome, 100, stdin);

			for (int i = 0; i < numClientes; i++) {

				if (strcmp(clientes[i].nome, nome) == 0) {

					printf("\nCliente localizado!\n");
					printf("Atualize o nome do cliente: ");
					fgets(clientes[i].nome, 100, stdin);
					printf("Atualize o e-mail do cliente: ");
					fgets(clientes[i].email, 100, stdin);

					printf("\nCliente atualizado com sucesso!\n\n");
				}


			}


			break;
		}

		case 4: {

			char nome[100];

			getchar();
			printf("\nDigite o nome do cliente que deseja excluir: ");
			fgets(nome, 100, stdin);

			for (int i = 0; i < numClientes; i++) {

				if (strcmp(clientes[i].nome, nome) == 0) {

					for (int j = i; j < numClientes - 1; j++) {

						clientes[j] = clientes[j + 1];
					}

					numClientes--;

					printf("\nCliente excluido com sucesso!\n");

				}
			}

				break;
		}

		case 5: {

			printf("\n\n=====================\nFinalizando programa!\n=====================");

			break;
		}
		
		default: printf("Opcao invalida.\n");
		break;

		}





	}while (opcao != 5);

	return 0;
}