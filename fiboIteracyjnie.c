//zadanie domowe dotyczace  Ciag Fibonacciego
//grupaII INFORMATYKA-m?.asp Piotr Pobier?yn

#include <stdio.h>
#include <stdlib.h>


//wersja iteracyjnie
unsigned int fib_iter(int n)
{
	int a = 0;
	int b = 1;
	int c;

	for(int i = 0; i < n; ++i)
	{
		c = a+b;
		a = b;
		b = c;
	}
	return a;
}



int main()
{

	int n;
	char pytanie;

	do
	{
	printf("Podaj liczbe dla ktorej zostanie wyliczony ciag : ");
	scanf("%d",&n);

	printf("Liczba Fibonaciego to %d\n", fib_liter(n));
	printf("Generowac kolejne liczby ciagu ? T/N ");
	scanf(" %c", &pytanie);
	}
	while( pytanie == 'T' || pytanie == 't');
	return 0;
}
