#include <stdio.h>
#include <math.h>
#include <float.h>

int a,b,c,d,tempo;
float valor;

void imprime ()
{
	printf("Horas e Minutos estacionados (hm): %2d %2d\n",c-a,d-b);
	printf("Valor do estacionamento (R$): %.2f \n",valor);
}

int entrada ()
{
	printf("Digite hora da entrada no estacionamento (h): \n");
	scanf("%d", &a);
	printf("Digite minutos da entrada no estacionamento (m): \n");
	scanf("%d", &b);
	printf("Digite hora da saida do estacionamento (h): \n");
	scanf("%d", &c);
	printf("Digite minutos da saida do estacionamento (m): \n");
	scanf("%d", &d);
	return a,b,c,d;

}

int calculo (int a,int b,int c,int d)
{
	tempo=((c-a)+((d-b)/60));
	if (tempo<=2)
	{
		valor=(tempo*1);
	}
	if  (tempo>2 && tempo<=4)
	{
		valor=2+((tempo-2)*1.4);
	}
	if  (tempo>4)
	{
		valor=4.8+((tempo-4)*2);
	}
	return tempo,valor;
}

int main()
{
    entrada();
	calculo(a,b,c,d);
	imprime();
	return 0;
}
	




