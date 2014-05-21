#include <stdio.h>
#include <math.h>
#include <float.h>

float a,b,c;

float entrada ()
{
	printf("Digite 1o. lado do triangulo: \n");
	scanf("%f", &a);
	printf("Digite 2o. lado do triangulo: \n");
	scanf("%f", &b);
	return a,b;
}

float calculo (float a, float b)
{
	c=sqrt(pow(a,2)+pow(b,2));
	return c;
}

float imprime (float c)
{
	printf("Hipotenusa do triangulo: %.2f \n",c);
	return 0;
}

int main()
{
    entrada();
	calculo(a,b);
   	imprime(c);
	return 0;
}
	
