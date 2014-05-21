#include <stdio.h>

int a,b,c;

int entrada ()
{
	printf("Digite um numero inteiro: \n");
	scanf("%d", &a);
	calculo(a);
	return 0;
}

int calculo (int a)
{
	b=a-1;
	c=a+1;
	imprime (b,c);
	return 0;
}

int imprime (int b, int c)
{
	printf("Antecessor do numero: %d \n",b);
	printf("Sucessor do numero: %d \n",c);
	return 0;
}

int main()
{
    entrada ();
	return 0;
}
	
