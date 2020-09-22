#include <stdio.h>

main ()
{
	//dados entrantes
	int op_comida;
	int op_bebida;
	int sim_nao;
	
	//dados prato
	int macarrao = 750;
	int japones = 324;
	int chileno = 545;
	
	//dados bebidas
	int cha = 30;
	int laranja = 80;
	int refri = 90;
	
	int caloria;
	
	
	
	printf("Bem vindo ao restaurante dois irmaos\n");
	printf("Esse e nosso cardapio:\n");
	
	printf("1. Macarrao\n");
	printf("2. Japones\n");
	printf("3. Chileno \n");
	
	printf("Favor inserir a opcao desejada:\n");
	scanf("%d",&op_comida);
	
	switch(op_comida)
	{
		case 1:
			printf("O prato selecionado e: ");
			printf("1. Macarrao\n");
			caloria = caloria + macarrao;
			break;
		
		case 2:			
			printf("O prato selecionado e: ");
			printf("2. Japones\n");
			caloria = caloria + japones;
			break;
			
		case 3:
			printf("O prato selecionado e: ");
			printf("3. Chileno \n");
			caloria = caloria + chileno;
			break;
			
		default:
			printf("opcao invalida!");
	}
	
	printf("Gostaria de uma bebida? 1 - Sim 2 - Nao \n"); //bebida
	scanf("%d",&sim_nao);
	
	if(sim_nao == 1)
	{
	printf("Esse e nosso cardapio de bebidas:\n");
	
	printf("1. Cha\n");
	printf("2. Suco de laranja\n");
	printf("3. Refri \n");
	
	printf("Favor inserir a opcao desejada:\n");
	scanf("%d",&op_bebida);
	
	switch(op_bebida)
	{
		
		case 1:
			printf("A bebida selecionada e: ");
			printf("1. Cha\n");
			caloria = caloria + cha;
			break;
		
		case 2:			
			printf("A bebida selecionada e: ");
			printf("2. Suco de laranja\n");
			caloria = caloria + laranja;
			break;
			
		case 3:
			printf("A bebida selecionada e: ");
			printf("3. Refri \n");
			caloria = caloria + refri;
			break;
			
		default:
			printf("opcao invalida!");
	}
	
	printf("O valor total de calorias foi de %d cal", caloria);
	
	
		
	}else
	{
		switch(op_comida)
		{
		case 1:
			printf("Total de caloria do prato selecionado e de 750 cal\n"); //macarrao
			break;
		
		case 2:
			printf("Total de caloria do prato selecionado e de 324 cal\n");//japones
			break;
			
		case 3:
			printf("Total de caloria do prato selecionado e de 545 cal\n");//chileno
			break;
			
		default:
			printf("opcao invalida!");
		}
	}
	
	
	
}
