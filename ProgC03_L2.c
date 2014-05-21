#include <stdio.h>
#include <math.h>
#include <float.h>

float a,b,c,d;

float entrada ()
{
	printf("Digite 3 numeros: \n");
	printf("Digite 1o. numero: \n");
	scanf("%f", &a);
	printf("Digite 2o. numero: \n");
	scanf("%f", &b);
	printf("Digite 3o. numero: \n");
	scanf("%f", &c);
	return a,b,c;
}

float calculo (float a, float b, float c)
{
	d=(pow(a,2))+(pow(b,2))+(pow(c,2));
	return d;
}

float imprime (float d)
{
	printf("Soma dos quadrados dos 3 numeros: %.2f \n",d);
	return 0;
}

int main()
{
    entrada();
	calculo(a,b,c);
   	imprime(d);
	return 0;
}
	
