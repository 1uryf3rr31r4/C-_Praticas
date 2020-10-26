#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int fahr, celsius, inferior, superior, passo;
	
	inferior = 0;
	superior = 300;
	passo = 20;
	fahr = inferior;
	
	while (fahr <= superior)
	{
		celsius = 5 * (fahr-32) /9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + passo;		
	}
}
