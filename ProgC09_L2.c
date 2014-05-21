#include <stdio.h>
#include <math.h>
#include <float.h>

float a,b,c;

void imprime1 ()
{
	printf("Emprestimo concedido! \n");
}

void imprime2 ()
{
	printf("Emprestimo nao concedido! \n");
}

float entrada ()
{
	printf("Digite Salario (R$): \n");
	scanf("%f", &a);
	printf("Digite prestacao do emprestimo (R$): \n");
	scanf("%f", &b);
	return a,b;
}

float calculo (float a, float b)
{
	c=a/b;
	if (c>5)
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
	
