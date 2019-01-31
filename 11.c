#include <stdio.h>

int main()
{
	int voto=0,i=0,ali=0,alc=0,nulo=0,branco=0,total=0;
	
	printf("Sistema de voto eletrônico\n\n");
	printf("Digite o numero do seu candidato\nde acordo com a seguinte tabela:\n\n");
	printf("83 - Alibabá\n93 - Alcapone\n00 - Branco\nOutro número - Nulo\n");
	printf("Para declarar encerrada a votação digite ó número ""666""\nAssim encerrando o proceso e sendo mostrado o resultado\n");
	printf("Bom Voto!\n\n");
							        // fazendo um teste para averiguar se um for pode funcionar com estes parametros = falhou	
	for(; ;)	   					//agora tentarei com um while
	{
		total++;
		printf("Insira seu voto:\n");
		scanf("%d", &voto);
		if(voto == 93)
		{	
			printf("Você votou em Alcapone!\n");
			alc++;
		}
		else if(voto == 83)
		{
			printf("Você votou em Alibabá!\n");
			ali++;
		}
		else if(voto == 0)
		{	
			printf("Você votou em Branco!\n");
			branco++;
		}
		else if(voto == 666)
		{
			break;
		}
		else
		{
			printf("Você votou em Nulo!\n");
			nulo++;
		}

	}

	printf("Resumo geral:\nAlibabá:%d\nAlcapone:%d\nBrancos: %d\nNulos:%d\n\n",ali,alc,branco,nulo);
	if(ali > alc)
	{
		printf("O vencedor foi: Alibabá\nCom %d votos!\n", ali);
	}
	else if(alc> ali)
	{
		printf("O vencedor foi: Alcapone\nCom %d votos!\n", alc);
	}
	else
	{
		printf("O vencedor foi: Brancos e Nulos\nCom %d votos!\n", nulo + branco);

	}
	return 0;
}