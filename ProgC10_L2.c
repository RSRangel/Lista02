#include <stdio.h>
#include <math.h>
#include <float.h>

int a;

int entrada ()
{
	printf("Escolha opcao abaixo: \n");
	printf("1 - Soma de 2 numeros: \n");
	printf("2 - Diferenca entre 2 numeros (maior pelo menor): \n");
	printf("3 - Produto entre 2 numeros: \n");
	printf("4 - Divisao entre 2 numeros (o denominador nao pode ser zero): \n");
	scanf("%d",&a);
	return a;
}

int calculo(a)
{
	switch (a)
{
	case 1:
		calculo1();
		break;
	case 2:
		calculo2();
		break;
	case 3:
		calculo3();
		break;
	case 4:
		calculo4();
		break;
	default:
		printf("Opcao invalida!!! \n");	
		break;
}
	return 0;
}

int calculo1()
{
	int x,y;
	printf("Digite 2 numeros: \n");
	printf("Digite 1o. numero: \n");
	scanf("%d", &x);
    printf("Digite 2o. numero: \n");
	scanf("%d", &y);
	printf("Soma dos 2 numeros: %d \n",x+y);
	return 0;
}

int calculo2()
{
	int x,y;
	printf("Digite 2 numeros: \n");
	printf("Digite 1o. numero: \n");
	scanf("%d", &x);
    printf("Digite 2o. numero: \n");
	scanf("%d", &y);
	if (x>=y)
		printf("Diferenca entre os 2 numeros: %d \n",x-y);
	else
		printf("Diferenca entre os 2 numeros: %d \n",y-x);
	return 0;
}

int calculo3()
{
	int x,y;
	printf("Digite 2 numeros: \n");
	printf("Digite 1o. numero: \n");
	scanf("%d", &x);
    printf("Digite 2o. numero: \n");
	scanf("%d", &y);
	printf("Produto entre os 2 numeros: %d \n",y*x);
	return 0;
}

int calculo4()
{
	int x,y;
	printf("Digite 2 numeros: \n");
	printf("Digite 1o. numero: \n");
	scanf("%d", &x);
    printf("Digite 2o. numero: \n");
	scanf("%d", &y);
	if (y==0)
	{
		printf("Divisao nao pode ser por zero!!! \n");	
		return 0;
	}
	printf("Divisao entre os 2 numeros: %d \n",x/y);
	return 0;
}

int main()
{
    entrada();
    calculo(a);
	return 0;
}
	
