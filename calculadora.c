#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main() {
	
	setlocale(LC_ALL,"Portuguese");
	int a,b, calculo;
	char operador;
	
	printf("Digite o valor de A: ");
	scanf("%i",&a);
	
	printf("/ = divisão\n+ = soma\n- = sutração\n* = multiplicação\nDigite a símbolo da operação: ");
	scanf(" %c",&operador);
	
	printf("Digite o valor de b: ");
	scanf("%i",&b);
	
	switch(operador){
		case '/' : calculo = a / b; printf("%i / %i = %i",a,b,calculo); break;
		case '*' : calculo = a * b; printf("%i * %i = %i",a,b,calculo); break;
		case '+' : calculo = a + b; printf("%i + %i = %i",a,b,calculo); break;
		case '-' : calculo = a - b; printf("%i - %i = %i",a,b,calculo); break;
		default:printf("Erro!!!!!!!!ANIMAL;");
	}

	
	
	
	
	
	
	
	return 0;
}
