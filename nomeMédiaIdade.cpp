#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
	int idade[10], op, op2=0, maior, menor, media, soma=0, mulheres=0;
	string sexo[10], nome[10], menorString;
	
	cout << "1. Informar os dados das 10 pessoas.\n";
	cout << "2. Sair.\n";
	cout << "Digite a opcao desejada: ";
	cin >> op;
	
	switch(op)
	{	
		case 1:
		{
			for(int i=0; i<10; i++)
				{
					cout << "Adicionar nome da pessoa " << i+1 <<": ";
					cin >> nome[i];
					cout << "Adicionar idade da pessoa " << i+1 <<": ";
					cin >> idade[i];
					cout << "Adicionar sexo da pessoa " << i+1 <<": ";
					cin >> sexo[i];	
				}
			
			maior = idade[0];
			
			menor = maior;
			
			while (op2 < 4)
			{
				cout << "1. Consultar o nome da pessoa mais nova.\n";
				cout << "2. Consultar a idade do homem mais idoso.\n";
				cout << "3. Consultar a média das idades das mulheres.\n";
				cout << "4. Sair.\n";
				cout << "Digite a opcao desejada: ";
				cin >> op2;
				
				if( op2 == 1)
				{
					for(int i=0; i<10; i++)
					{
						if(idade[i] < menor)
						{
					    	menorString = nome[i];
						}
					}
					cout << menorString << " e a pessoa mais nova\n";
				}
					
				if( op2 == 2)
				{
					for(int i=0; i<10; i++)
					{
						if(idade[0]<=idade[i] && sexo[i] == "M")
						{
					    	maior = idade[i];
						}
					}
				
					cout << "O idoso mais velho tem " << maior << " anos de idade\n";
				}
			
				if( op2 == 3)
				{
					for(int i=0; i<2; i++)
					{
						if(sexo[i] == "F")
						{
					    	soma = soma + idade[i];
					    	mulheres = mulheres + 1;
					    	media = soma/mulheres;
						}   
					}
					
					cout << "A idade media das mulheres e " << media << "\n";
				}
			}		
		}	
	}
}

