//Exerc 01

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int valor1 = 0;
	int valor2 = 0;
	int option =0;
	int resultado = 0;
	int back;
	
menu:	
	prinft("\n");
	printf("Please, enter with a number:\n");
	scanf("%d",&valor1);
		
	printf("Please, enter with another number:\n");
	scanf("%d",&valor2);
	
		
	printf("Pick one operation:\n");
	printf("1. +\n");
	printf("2. -\n");
	printf("3. *\n");
	printf("4. /\n");
	
	
	scanf("%d",&option);
	
	switch(option)
	{
		case 1:
			resultado = valor1 + valor2;
			printf("The result of your addition is %d\n",resultado);
			break;
		case 2:
			resultado = valor1 - valor2;
			printf("The result of your subtraction is %d\n",resultado);
			break;
			
		case 3:
			resultado = valor1 * valor2;
			printf("The result of your multiplication is %d\n",resultado);
			break;
			
		case 4:
			resultado = valor1 / valor2;
			printf("The result of your division is %d\n",resultado);
			break;
			
	}
	
	printf("Do you want to continue?\n 1 - yes \n 2 - no\n");
	scanf("%d",&back);
	
	if(back == 1){
		goto menu;
	}else{
		
	}
	
	
	return 0;
}
