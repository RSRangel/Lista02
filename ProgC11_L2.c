#include <stdio.h>
#include <math.h>
#include <float.h>

float a,b;

void imprime1 ()
{
	printf("Aposentadoria concedida! \n");
}

void imprime2 ()
{
	printf("Aposentadoria nao concedida! \n");
}

float entrada ()
{
	printf("Digite Idade do trabalhador: \n");
	scanf("%f", &a);
	printf("Digite tempo de servico (anos): \n");
	scanf("%f", &b);
	return a,b;
}

float calculo (float a, float b)
{
	if ((a>=65 && b>=30 ) || (a>=60 && b>=25))
	{
		imprime1();
	}
	else
	{
		imprime2();
	}
	return 0;
}

int main()
{
    entrada();
	calculo(a,b);
	return 0;
}
	
