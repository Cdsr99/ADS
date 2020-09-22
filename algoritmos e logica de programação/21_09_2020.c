#include <stdio.h>

main()
{
	int opc = 0;
	int opb = 0;
	
	//Comida
	int macarrao = 750;
	int japones = 324;
	int chileno = 545;
	
	//bebida
	int cha = 30;
	int suco = 80;
	int refri = 90;
	
	//Operacao
	int resul = 0;
	
    printf("Ola seja bem vindo ao restaurante dois irmaos\n");
    printf("\n");
    printf("Esse e o nosso menu\n");
    printf("\n");
    printf("1. Macarrao\n");
    printf("2. Japones\n");
    printf("3. Chileno\n");
    printf("\n");
    //printf("\n");
    printf("Por favor qual seria o pedido do prato?\n");
    scanf("%d",&opc);
    printf("Qual seria a bebida?\n");
	printf("\n");
    printf("1. Cha\n");
    printf("2. Suco de laranja\n");
    printf("3. Refri\n");
    printf("\n");
    scanf("%d",&opb);
    
    
    if(opc == 1 && opb == 1)
    {
    	resul = maracarrao + cha;
    	printf("Voce escolheu a opcao %opc e %opb que da um total de caloria de %",opc,opb,resul);
	}else if(opc == 1 && opb == 2)
	{
		resul = macarrao  + suco ;
    	printf("Voce escolheu a opcao %opc e %opb que da um total de caloria de %",opc,opb,result);	
	}
	else if(opc == 1 && opb == 2)
	{
		resul = macarrao + refri  ;
    	printf("Voce escolheu a opcao %opc e %opb que da um total de caloria de %",opc,opb,result);	
	}
	else if(opc == 1 && opb == 2)
	{
		resul =  + ;
    	printf("Voce escolheu a opcao %opc e %opb que da um total de caloria de %",opc,opb,result);	
	}
	else if(opc == 1 && opb == 2)
	{
		resul =  + ;
    	printf("Voce escolheu a opcao %opc e %opb que da um total de caloria de %",opc,opb,result);	
	}
	else if(opc == 1 && opb == 2)
	{
		resul =  + ;
    	printf("Voce escolheu a opcao %opc e %opb que da um total de caloria de %",opc,opb,result);	
	}
    
    return 0;
}
