#include <stdio.h>
#include <math.h>
#include <float.h>

float a,b;

float entrada ()
{
	printf("Digite qte. horas trabalhadas: \n");
	scanf("%f", &a);
	return a;
}

float calculo (float a)
{
	b=a*30.00*0.92;
	return b;
}

float imprime (float b)
{
	printf("Salario liquido: %.2f \n",b);
	return 0;
}

int main()
{
	imprime(calculo(entrada()));
	return 0;
}
	
