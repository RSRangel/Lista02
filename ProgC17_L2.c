#include <stdio.h>
#include <math.h>
#include <float.h>

float a,b,imc;

void imprime ()
{
	if (imc<18.5)
	{
		printf("Abaixo do Peso IMC: %.2f\n",imc);
	}
	else
	{
		if (imc>18.5 && imc<=24.9)
		{
			printf("Saudavel IMC: %.2f\n",imc);
		}
		else
			if (imc>24.9 && imc<=29.9)
			{
				printf("Peso em excesso IMC: %.2f\n",imc);
			}	
			else
				if (imc>29.9 && imc<=34.9)
				{
					printf("Obesidade Grau I IMC: %.2f\n",imc);
				}
				else
					if (imc>34.9 && imc<=39.9)
					{
						printf("Obesidade Grau II (Severa)IMC: %.2f\n",imc);
					}	
					else
						if (imc>39.9)
						{
							printf("Obesidade Grau III (Morbida)IMC: %.2f\n",imc);
						}		
	}

}

float entrada ()
{
	printf("Digite altura da pessoa (metros): \n");
	scanf("%f", &a);
	printf("Digite peso da pessoa (Kg): \n");
	scanf("%f", &b);
	return a,b;
}

float calculo (float a, float b)
{
	imc=b/(pow(a,2));
	return imc;
}

int main()
{
    entrada();
	calculo(a,b);
	imprime();
	return 0;
}
	




