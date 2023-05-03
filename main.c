#include <stdio.h>
#include <stdlib.h>
#define N 10
int pilha[N] = {0,0,0,0,0,0,0,0,0,0};
int topo = 0;

int verificaTopo(){
	if(topo >= N){
		return 0;
	}else{
		return 1;
	}
}

//Adicionar
void push(int valor){
	if(verificaTopo()){
		pilha[topo] = valor;
		topo++;
		printf("Adicionado com sucesso!");
	}else{
		printf("Pilha cheia!\n");
		system("pause");
	}
}

//Remover
void pop(){
	int remove = topo-1;
	pilha[remove] = 0;
	topo--;
}

void limpar(){
	int i = topo-1;
	for(i; i >= 0; i--){
		pilha[i] = 0;
	}
	topo = 0;
}

void exibir(){
	int i = topo-1;
	if(topo == 0){
		printf("Pilha vazia\n");
	}else{
		for(i; i >= 0; i--){
		printf("Pilha[%d]: %d\n", i, pilha[i]);
		}
	}
}

int main(int argc, char *argv[]) {
	int escolha = 0, valor;
	do{
		system("cls");
		printf("MENU\n");
		printf("[1] Push\n");
		printf("[2] Pop\n");
		printf("[3] Limpar\n");
		printf("[4] Exibir\n");
		printf("[0] Sair\n");
		scanf("%d", &escolha);
		
		switch(escolha){
			case 0:
				//Encerrar programa
				break;
			case 1:
				//Adicionar
				printf("Qual valor deseja adicionar?");
				scanf("%d", &valor);
				push(valor);
				break;
			case 2:
				//Remover
				pop();
				break;
			case 3:
				//Limpar
				limpar();
				break;
			case 4:
				//Exibir
				exibir();
				system("pause");
				break;
			defaut:
				printf("Opcao invalida!");
			
		}
	}while(escolha!= 0);

	return 0;
}
