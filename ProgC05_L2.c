#include <stdio.h>
#include <math.h>
#include <float.h>

float a,b,c;

float calculo ()
{
	a=780.000*0.46;
	b=780.000*0.32;
	c=780.000-a-b;
	return a,b,c;
}

float imprime (float a,float b,float c)
{
	printf("Premio do 1o. ganhador R$: %.2f \n",a);
	printf("Premio do 2o. ganhador R$: %.2f \n",b);
	printf("Premio do 3o. ganhador R$: %.2f \n",c);
	return 0;
}

int main()
{
	calculo();
	imprime(a,b,c);
	return 0;
}
	
