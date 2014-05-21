#include <stdio.h>
#include <math.h>
#include <float.h>

float a,b;

void imprime ()
{
	printf("Comissao da Venda (R$): %.2f\n",b);
}

float entrada ()
{
	printf("Digite valor da venda (R$): \n");
	scanf("%f", &a);
	return a;
}

float calculo (float a)
{
	if (a>=100000)
	{
		b=(a*0.16)+700,00;
	}
	if  ((a>=80000) && (a<100000))
	{
		b=(a*0.14)+650,00;
	}
	if (a>=60000 && a<80000)
	{
		b=(a*0.14)+600,00;
	}	
	if (a>=40000 && a<60000)
	{
		b=(a*0.14)+550,00;
	}
	if (a>=20000 && a<40000)
	{
		b=(a*0.14)+500,00;
	}	
	if (a<20000)
	{
		b=(a*0.14)+400,00;
	}
	return a,b;
}

int main()
{
    entrada();
	calculo(a);
	imprime();
	return 0;
}
	




