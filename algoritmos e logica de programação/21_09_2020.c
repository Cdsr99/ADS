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
    
    // 1
    if(opc == 1 && opb == 1)
    {
    	resul = macarrao + cha;
    	printf("Voce escolheu a opcao %d e %d que da um total de caloria de %d",opc,opb,resul);
	}else if(opc == 1 && opb == 2)
	{
		resul = macarrao  + suco ;
    	printf("Voce escolheu a opcao %d e %d que da um total de caloria de %d",opc,opb,resul);	
	}
	else if(opc == 1 && opb == 3)
	{
		resul = macarrao + refri ;
    	printf("Voce escolheu a opcao %d e %d que da um total de caloria de %d",opc,opb,resul);	
	}
	
	// 2 - Japones
	else if(opc == 2 && opb == 1)
	{
		resul = japones  + cha ;
    	printf("Voce escolheu a opcao %d e %d que da um total de caloria de %d",opc,opb,resul);	
	}
	else if(opc == 2 && opb == 2)
	{
		resul = japones  + suco ;
    	printf("Voce escolheu a opcao %d e %d que da um total de caloria de %d",opc,opb,resul);	
	}
		else if(opc == 2 && opb == 3)
	{
		resul = japones + refri;
    	printf("Voce escolheu a opcao %d e %d que da um total de caloria de %d",opc,opb,resul);	
	}
	// 3

		else if(opc == 3 && opb == 1)
	{
		resul = chileno + cha ;
    	printf("Voce escolheu a opcao %d e %d que da um total de caloria de %d",opc,opb,resul);	
	}
		else if(opc == 3 && opb == 2)
	{
		resul = chileno + suco;
    	printf("Voce escolheu a opcao %d e %d que da um total de caloria de %d",opc,opb,resul);	
	}
		else if(opc == 3 && opb == 3)
	{
		resul = chileno + refri ;
    	printf("Voce escolheu a opcao %d e %d que da um total de caloria de %d",opc,opb,resul);	
	}

    
    return 0;
}
