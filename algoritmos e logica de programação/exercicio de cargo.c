#include <stdio.h>


main()
{
	int cargo;
	
	printf("Favor inserir o numero do cargo:\n");
	scanf("%d",&cargo);
	
	if(cargo == 1)
	{
	  printf("O aumento do seu cargo foi de 10%");	
	}
	else if (cargo == 2)
	{
	  printf("O aumento do seu cargo foi de 30%");	
	}
	else if (cargo == 3)
	{
	  printf("O aumento do seu cargo foi de 20%");	
	}
	else if (cargo == 4)
	{
	  printf("O aumento do seu cargo foi de 50%");	
	}
	else if (cargo == 5)
	{
	  printf("O aumento do seu cargo foi de 0.4%");	
	}
	else if (cargo == 6)
	{
	  printf("O aumento do seu cargo foi de 9%");	
	}
	else if (cargo == 7 )
	{
	  printf("O aumento do seu cargo foi de 1%");	
	}
	system("pause\n");
	
}
