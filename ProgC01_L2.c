#include <stdio.h>

float entrada ()
{
	float a;
	printf("Digite um numero real: \n");
	scanf("%f", &a);
	return a;
}

float quadrado (float b)
{
	float c;
	c=b*b;
	return c;
}

float imprime (float c)
{
	printf("Quadrado do numero: %.2f \n",c);
	return 0;
}
		
		
void main()
{
    imprime(quadrado (entrada ()));	
	return 0;
}



