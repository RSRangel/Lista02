#include <stdio.h>
#include <math.h>
#include <float.h>

float a,c;
char b;

void imprime ()
{
	if (b=='m'|| b=='M')
	{
		printf("Peso Ideal para altura %.2f e sexo masculino: %.2f \n",a,c);
	}
	else
	{
		printf("Peso Ideal para altura %.2f e sexo feminino: %.2f \n",a,c);
	}

}

char entrada1 ()
{
   	printf("Digite sexo da pessoa (m/f): \n");
	scanf("%c", &b);
	if  (b!='m'&& b!='M'&& b!='f'&& b!='F')
	{
		printf("Sexo Invalido!! \n");
		exit(0);	
	}
	return b;
}

float entrada2 ()
{
	printf("Digite altura da pessoa (metros): \n");
	scanf("%f", &a);
	return a;
}

float calculo (float a, char b)
{
	if (b=='m'|| b=='M')
	{
		c=(72.7*a)-58;
	}
	else
	{		
		c=(62.1*a)-44.7;
	}
	return 0;
}

int main()
{
    entrada1();
    entrada2();
	calculo(a,b);
	imprime();
	return 0;
}
	




