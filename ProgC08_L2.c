#include <stdio.h>
#include <string.h>

int a;

int entrada ()
{
	printf("Digite numero inteiro positivo de 3 digitos: \n");
	scanf("%d", &a);
	return a;
}

int imprime (int a)
{
	char b[3];
	sprintf(b,"%d",a);
	printf("Numero invertido: %c%c%c\n",b[2],b[1],b[0]);
	return 0;
}

int main()
{
    entrada();
   	imprime(a);
	return 0;
}
	
