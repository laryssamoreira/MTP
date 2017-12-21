#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
typedef struct{
	char nome[300];
	int idade;
	char rg[20];
	char cpf[20];
	char usuario[100];
	char senha[100];
}cadastro;
typedef struct{
	float saldo;
	int insere;
	int retira;
	float valorinserido;
	float valorretirado;
}ext;
void criarconta(){
	cadastro cliente;
	char conta[300], registro[300];
	FILE * arquivo;
	printf("Insira a idade:");
	scanf("%d", &cliente.idade);
	if(cliente.idade>=18){
		printf("\nInsira o primeiro nome:");
		scanf("%s",cliente.nome);
		strcpy(registro, cliente.nome);
		strcat(registro, ".txt");
		arquivo = fopen(registro, "w");
		printf("Insira o rg:");
		scanf("%s", &cliente.rg);
		printf("Insira o cpf:");
		scanf("%s", &cliente.cpf);
		printf("Insira o usuario:");
		scanf("%s", &cliente.usuario);
		printf("Insira a senha:");
		scanf("%s", &cliente.senha);
		fprintf(arquivo,"%s\t%d\t%s\t%s\t%s\t%s",cliente.nome,cliente.idade,cliente.rg, cliente.cpf, cliente.usuario, cliente.senha);
	}
	else{
		printf("\nIDADE INVALIDA!\n");
		system("pause");
		return;
	}
	fclose (arquivo);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	arquivo = fopen(conta, "w");
	fprintf(arquivo, "%f\t%d\t%f\t%d\t%f", 0.00, 0, 0.00, 0, 0.00);
	fclose (arquivo);
}
void mostrarconta(){
	FILE * arquivo;
	cadastro cliente;
	char registro[300];
	printf("\nInsira o nome para pesquisa:");
	scanf("%s",cliente.nome);
	strcpy(registro, cliente.nome);
	strcat(registro, ".txt");
	arquivo = fopen(registro, "r");
	if(arquivo==NULL){
		fprintf(stderr,"\nNao existe!\n");
		system("pause");
		return;
	}
	fscanf(arquivo,"%s\t%d\t%s\t%s\t%s\t%s",&cliente.nome,&cliente.idade,&cliente.rg, &cliente.cpf, &cliente.usuario, &cliente.senha);
	fclose(arquivo);
	fprintf(stdout,"NOME: %s",cliente.nome);
	fprintf (stdout, "\nIDADE: %d",cliente.idade);
	fprintf(stdout, "\nRG: %s",cliente.rg);
	fprintf(stdout,"\nCPF: %s",cliente.cpf);
	fprintf (stdout, "\nUSUARIO: %s\n",cliente.usuario);
	system("pause");
	return;
}
void mostrarsaldo(){
	FILE * arquivo;
	cadastro cliente;
	ext valor;
	char conta[300];
	printf("\nInsira o nome para pesquisa:");
	scanf("%s",cliente.nome);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	arquivo = fopen(conta, "r");
	if(arquivo==NULL){
		fprintf(stderr,"\nNao existe!\n");
		system("pause");
		return;
	}
	fscanf(arquivo,"%f",&valor.saldo);
	fclose(arquivo);
	printf("\nSEU SALDO E': %.2f\n",valor.saldo);
	system("pause");
	return;
}
void inserirmoney(){
	FILE * arquivo;
	cadastro cliente;
	ext valor;
	char conta[300];
	float dindin;
	printf("\nInsira o nome para pesquisa:");
	scanf("%s",cliente.nome);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	arquivo = fopen(conta, "r");
	if(arquivo==NULL){
		fprintf(stderr,"\nNao existe!\n");
		system("pause");
		return;
	}
	fscanf(arquivo, "%f\t%d\t%f\t%d\t%f", &valor.saldo, &valor.insere, &valor.valorinserido, &valor.retira, &valor.valorretirado);
	fclose(arquivo);
	printf("\nQual valor deseja inserir?");
	scanf("%f", &dindin);
	valor.saldo = valor.saldo + dindin;
	valor.insere ++;
	valor.valorinserido = valor.valorinserido + dindin;
	arquivo = fopen(conta, "w");
	fprintf(arquivo, "%f\t%d\t%f\t%d\t%f", valor.saldo, valor.insere, valor.valorinserido, valor.retira, valor.valorretirado);
	fclose (arquivo);
	printf("\nOperacao efetuada com sucesso.\n");
	system("pause");
	return;
}
void retirarmoney(){
	FILE * arquivo;
	cadastro cliente;
	ext valor;
	char conta[300];
	float dindin;
	printf("\nInsira o nome para pesquisa:");
	scanf("%s",cliente.nome);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	arquivo = fopen(conta, "r");
	if(arquivo==NULL){
		fprintf(stderr,"\nNao existe!\n");
		system("pause");
		return;
	}
	fscanf(arquivo, "%f\t%d\t%f\t%d\t%f", &valor.saldo, &valor.insere, &valor.valorinserido, &valor.retira, &valor.valorretirado);
	fclose(arquivo);
	printf("\nQual valor deseja retirar?");
	scanf("%f", &dindin);
	if(dindin>valor.saldo){
		printf("\nSALDO INSUFICIENTE. Operacao nao efetuada.\n");
	}
	else if(dindin==valor.saldo){
		valor.retira ++;
		printf("\nSALDO IGUAL AO SAQUE. Sua conta esta zerada.\n");	
		arquivo = fopen(conta, "w");
		valor.valorretirado = valor.valorretirado + dindin;
		fprintf(arquivo, "%f\t%d\t%f\t%d\t%f", 0.00, valor.insere, valor.valorinserido, valor.retira, valor.valorretirado);
		fclose (arquivo);
	}
	else{
		valor.retira ++;
		valor.saldo = valor.saldo - dindin;
		valor.valorretirado = valor.valorretirado + dindin;
		arquivo = fopen(conta, "w");
		fprintf(arquivo, "%f\t%d\t%f\t%d\t%f", valor.saldo, valor.insere, valor.valorinserido, valor.retira, valor.valorretirado);
		fclose (arquivo);
		printf("\nOperacao efetuada com sucesso.\n");
	}
	system("pause");
	return;
	
}
void extrato(){
	FILE * arquivo;
	cadastro cliente;
	ext valor;
	char conta[300];
	printf("\nInsira o nome para expor o extrato:");
	scanf("%s",cliente.nome);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	arquivo = fopen(conta, "r");
	if(arquivo==NULL){
		fprintf(stderr,"\nNao existe!\n");
		system("pause");
		return;
	}
	fscanf(arquivo, "%f\t%d\t%f\t%d\t%f", &valor.saldo, &valor.insere, &valor.valorinserido, &valor.retira, &valor.valorretirado);
	fclose(arquivo);
	printf("\nSEU SALDO E': %.2f\n",valor.saldo);
	printf("\nVoce inseriu %.2f ,%d vezes\n",valor.valorinserido,valor.insere);
	printf("\nVoce retirou %.2f ,%d vezes\n",valor.valorretirado,valor.retira);
	system("pause");
	return;
}
void removerconta(){
	FILE * arquivo;
	cadastro cliente;
	char conta[300], registro[300];
	printf("\nInsira o nome da conta a ser retirado:");
	scanf("%s",cliente.nome);
	strcpy(registro, cliente.nome);
	strcat(registro, ".txt");
	remove(registro);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	remove(conta);
	printf("\nOperacao efetuada com sucesso.\n");
	system("pause");
	return;	
}
int main(){
	int op;
	do{ 
		system("cls");
		printf("Bem-vindo!");
		printf("\nDigite uma opcao:\n");
		printf("\n1- Criar conta:");
		printf("\n2- Mostrar conta:");
		printf("\n3- Mostrar saldo:");
		printf("\n4- Inserir dinheiro:");
		printf("\n5- Retirar dinheiro:");
		printf("\n6- Extrato:");
		printf("\n7- Remover conta:");
		printf("\n8- Sair.\n");
		scanf("%d", &op);
		switch(op){
			case 1:
				criarconta();
				break;
			case 2:
				mostrarconta();
				break;
			case 3:
				mostrarsaldo();
				break;
			case 4:
				inserirmoney();
				break;
			case 5:
				retirarmoney();
				break;
			case 6:
				extrato();
				break;
			case 7:
				removerconta();
				break;
			default:
				printf("\nOpcao nao existente!\n");
				system("pause");
		}
	}while(op!=8);
	return 0;
}
