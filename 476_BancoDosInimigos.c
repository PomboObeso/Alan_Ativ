#include <stdio.h>
#include <string.h>

struct info{
	char name[20];
	int id;
	int level;
	int vida;
	int atq;
	int def;
};

void ler_ficha(struct info ficha[], int n){
	int i;
	for(i = 0; i < n; i++)
	{
		scanf("%[^\n]s", ficha[i].name);
		scanf("%d", &ficha[i].id);
		scanf("%d", &ficha[i].level);
		scanf("%d", &ficha[i].vida);
		scanf("%d", &ficha[i].atq);
		scanf("%d", &ficha[i].def);
	}
}
void imprimir_ficha(struct info ficha[],int n){
	int i;
	for(i = 0; i < n;i++)
	{
		printf("Nome: %s\nID: %d\nLevel: %d\nVida: %d\nAtaque: %d\nDefesa: %d\n",ficha[i].name,
																				 ficha[i].id,
																				 ficha[i].level,
																				 ficha[i].vida,
																				 ficha[i].atq,
																				 ficha[i].def);
	}
}
int main(){
	int n;
	scanf("%d", &n); //informando o numero de players

	struct info ficha[n];
	ler_ficha(ficha,n);
	imprimir_ficha(ficha,n);
}