//zadanie domowe dotyczace  Ciag Fibonacciego
//grupaII INFORMATYKA-m?.asp Piotr Pobier?yn

#include <stdio.h>
#include <stdlib.h>



//wersja rekurencyjnie
unsigned int fib_rekur(int n)
{
	if (n <= 1)
	{
		return n;
	}
	else
	{
		return fib_rekur(n - 1) + fib_rekur(n - 2);
	}
}



int main()
{

	int n;
	char pytanie;

	do
	{
	printf("Podaj liczbe dla ktorej zostanie wyliczony ciag : ");
	scanf("%d",&n);
	                     printf("Liczba Fibonaciego to %d\n", fib_rekur(n));

	printf("Generowac kolejne liczby ci¹gu ? T/N ");
	scanf(" %c", &pytanie);
	}
	while( pytanie == 'T' || pytanie == 't');
	return 0;
}
