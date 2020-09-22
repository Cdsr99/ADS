#include <stdio.h>
#include <string.h>
int main()
{
	int val1;
	int val2;
	int op;
    int op2;
		 
	printf("Ola\n");
	printf("Por favor entre com um o primeiro valor:\n");
	scanf("%d",&val1);
	
	printf("Por favor entre com o segundo valor:\n");
	scanf("%d",&val2);
	
	printf("Voce escoheu os valores %d e %d\n",val1,val2);
	printf("Qual e a opcao desejada?\n");
	
	printf("1. + \n");
	printf("2. - \n");
	printf("3. / \n");
	printf("4. * \n");
	
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
			if( val1 + val2 >= 0)
			{
			printf("O resultado da soma e %d \n",val1 + val2);
			}
			else
			{
				printf("Erro, a soma dos dois valores e menor que 0.\n");
			}
			break;

			
		case 2:
			if(val1 - val2 >= 0)
			{
			printf("O resultado da subtracao e %d \n",val1 - val2);
			system("PAUSE\n");
			}
			else
			{
				printf("Erro, a subtracao dos dois valores e menor que 0.\n");
			}
			break;	
			
		case 3:
			if(val1 / val2 >= 0)
			{
			printf("O resultado da divisao e %d \n",val1 / val2);
			system("PAUSE\n");
			}
			else
			{
				printf("Erro, a divisao dos dois valores e menor que 0.\n");
			}
			break;

		case 4:
			if(val1 * val2 >= 0)
			{
			printf("O resultado da mutiplicacao e %d \n",val1 * val2);
			system("PAUSE\n");	
			}
			else
			{
				printf("Erro, a mutiplicacao dos dois valores e menor que 0.\n");
			}
			break;
			
			
		default:
			printf("Erro, favor inserir uma opcao valida\n");
			system("PAUSE\n");
			
	}
	printf("Deseja continuar? 1 - Sim 2- Nao \n");
	scanf("%d",&op2);
	
	if(op2 == 1)
	{
		goto inicio;	
	}
	return 0;
}
