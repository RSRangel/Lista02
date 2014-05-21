#include <stdio.h>
#include <math.h>
#include <float.h>

float a,b;

float entrada ()
{
	printf("Digite salario (R$): \n");
	scanf("%f", &a);
	return a;
}

float calculo (float a)
{
	b=a*1.25;
	return b;
}

float imprime (float b)
{
	printf("Salario com aumento de 25%%: %.2f \n",b);
	return 0;
}

int main()
{
	imprime(calculo(entrada()));
	return 0;
}
	
