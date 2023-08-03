#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 99

void clean_buffer(){
	int c;
    	while((c = getchar()) != '\n' && c != EOF){}
}

void read_text(char *name, int size){
   	fgets(name, size, stdin);
	strtok(name, "\n");
}

void format_cpf(char *old_cpf, char new_cpf[]){
	sprintf(new_cpf, "%.3s.%.3s.%.3s-%.2s", old_cpf, old_cpf + 3, old_cpf + 6, old_cpf + 9);
}

struct dados_cliente{
	char nome[50];
	char cpf[15];
	int nasc;
};

void vender_ingresso(int *codigo, struct dados_cliente venda[]){
	char digit_cpf[15], new_cpf[15];
	int cont;

	printf("====== VENDA DE INGRESSOS ======\n");
	printf("Nome: ");
	read_text(venda[*codigo].nome, 50);

	do{
		cont = 0;
		printf("CPF: ");
		read_text(digit_cpf, 15);
		format_cpf(digit_cpf, new_cpf);

		for(int i = 0; i < TAM; i++){
			if(strcmp(new_cpf, venda[i].cpf) == 0){
				printf("Um ingresso já foi vendido para esse CPF.\n");
				printf("Por favor, digite outro CPF válido.\n");
				cont++;
			}
		}

		if(strlen(new_cpf) != 14){
			printf("Por favor, digite um CPF com 11 dígitos.\n");
			cont++;
		}
	}while(cont != 0);
	strcpy(venda[*codigo].cpf, new_cpf);

	printf("Ano de nascimento: ");
	scanf("%d", &venda[*codigo].nasc);
	clean_buffer();
	
	system("cls");
	printf("====== VENDA DE INGRESSOS ======\n");
	printf("Venda realizada com sucesso!\n\n");
	system("pause");
}

void listar_ingressos(int *codigo, struct dados_cliente venda[]){
	printf("==== LISTAGEM DE INGRESSOS ====\n");
	
	for(int i = 0; i <= TAM; i++){
		if (i <= *codigo - 1){
			printf("Nome: %s\n", venda[i].nome);
			printf("CPF: %s\n", venda[i].cpf);
			printf("Ano de nascimento: %d\n", venda[i].nasc);
			printf("===============================\n\n");
		}
	}
	
	system("pause");
}

void validar_ingresso(struct dados_cliente venda[]){
	char validar[15], convert[15];
	int controle;
	
	printf("====== VALIDAÇÃO DE INGRESSOS ======\n");
	printf("Digite o CPF para validação: ");
	read_text(convert, 15);
	format_cpf(convert, validar);
	
	system("cls");
	
	for(int i = 0; i <= TAM; i++){
		if (strcmp(venda[i].cpf, validar) == 0){
			printf("====== INGRESSO VALIDADO ======\n");
			printf("Nome: %s\n", venda[i].nome);
			printf("CPF: %s\n", venda[i].cpf);
			printf("Ano de nascimento: %d\n", venda[i].nasc);
			printf("===============================\n\n");
			controle = 1;
		}
	}
	
	if(controle != 1){
		printf("==== INGRESSO NÃO VALIDADO ====\n\n");
	}
		
	system("pause");
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int x = 0, codigo = 0;
	struct dados_cliente venda[TAM];	
	
	do{
		printf("========= MENU PRINCIPAL =========\n");
		printf("1 - Vender ingresso.\n");
		printf("2 - Listar ingressos vendidos.\n");
		printf("3 - Validar ingresso.\n");
		printf("4 - Sair.\n");
		printf("\nDigite a opção desejada: ");
		scanf("%d", &x);
		clean_buffer();
		system("cls");
		
		switch(x){
			case 1: 
				vender_ingresso(&codigo, venda);
				codigo = codigo + 1;
				break;
			case 2: 
				listar_ingressos(&codigo, venda);
				break;
			case 3: 
				validar_ingresso(venda);
				break;
			case 4: 
				printf("=========== SAINDO ===========\n\n");
				system("pause");
				break;
			default: 
				printf("======= OPÇÃO INVÁLIDA =======\n\n");
				system("pause");
				break;
		}
		
		system("cls");
	}while(x != 4);
	
	return 0;
}
