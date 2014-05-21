#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int a,alea1,alea2,qte;

void imprime1 ()
{
	printf("Soma de %d e %d igual a %d \n",alea1,alea2,alea1+alea2);
	printf("Sua resposta: %d\n",a);
}

void imprime2 ()
{
	printf("Quantidade de acertos: %d \n",qte);
}

int entrada ()
{
	srand(time(NULL));
	alea1=((rand()%100));
	alea2=((rand()%100));
	printf("Qual e a soma de %d e %d?: \n",alea1,alea2);
	scanf("%d", &a);
	return a,alea1,alea2;

}

int calculo ()
{
	if (a==(alea1+alea2))
	{
		qte++;
	}
	return qte;
}

int main()
{
	imprime1(calculo((entrada())));
	imprime1(calculo((entrada())));
	imprime1(calculo((entrada())));
	imprime1(calculo((entrada())));
	imprime1(calculo((entrada())));
	imprime2();
	return 0;
}
	
	

