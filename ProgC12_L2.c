#include <stdio.h>
#include <math.h>
#include <float.h>

int a;

int entrada ()
{
	printf("Escolha opcao abaixo: \n");
	printf("1 - Media Geoometrica \n");
	printf("2 - Media Ponderada \n");
	printf("3 - Media Harmonica \n");
	printf("4 - Media Aritmetica \n");
	scanf("%d",&a);
	return a;
}

float calculo(a)
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
	int x,y,z;
	printf("Digite 3 numeros inteiros positivos: \n");
	printf("Digite 1o. numero: \n");
	scanf("%d", &x);
    printf("Digite 2o. numero: \n");
	scanf("%d", &y);
    printf("Digite 3o. numero: \n");
	scanf("%d", &z);
	printf("Media Geometrica: %.2f \n",pow(x*y*z,0.333));
	return 0;
}

int calculo2()
{
	int x,y,z;
	printf("Digite 3 numeros inteiros positivos: \n");
	printf("Digite 1o. numero: \n");
	scanf("%d", &x);
    printf("Digite 2o. numero: \n");
	scanf("%d", &y);
    printf("Digite 3o. numero: \n");
	scanf("%d", &z);
	printf("Media Ponderada: %.2f \n",((x*1.00)+(2*y*1.00)+(3*z*1.00))/6);
	return 0;
}

int calculo3()
{
	int x,y,z;
	printf("Digite 3 numeros inteiros positivos: \n");
	printf("Digite 1o. numero: \n");
	scanf("%d", &x);
    printf("Digite 2o. numero: \n");
	scanf("%d", &y);
    printf("Digite 3o. numero: \n");
	scanf("%d", &z);
	printf("Media Harmonica: %.2f \n",(1/((1/x*1.00)+(1/(y*z*1.00)))));
	return 0;
}

int calculo4()
{
	int x,y,z;
	printf("Digite 3 numeros inteiros positivos: \n");
	printf("Digite 1o. numero: \n");
	scanf("%d", &x);
    printf("Digite 2o. numero: \n");
	scanf("%d", &y);
    printf("Digite 3o. numero: \n");
	scanf("%d", &z);
	printf("Media Aritmetica: %.2f \n",((x*1.00)+(y*1.00)+(z*1.00))/3);
	return 0;
}

int main()
{
    entrada();
    calculo(a);
	return 0;
}
	
