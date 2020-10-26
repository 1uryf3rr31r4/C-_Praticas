#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	string nome, sexo, saude;
	int aptoM = 0, aptoF = 0, inaptoM = 0, inaptoF = 0, cont, idade;

	
	cout << "Digite o numero de canditados a serem avaliados \n";
	cin >> cont;
	
	while (cont > 0)
	{
		cout << "Digite o nome do candidato \n";
		cin >> nome;
	
		cout << "Digite a idade do candidato \n";
		cin >> idade;
	
		cout << "Digite o sexo do candidato \n";
		cin >> sexo;
	
		cout << "Digite a condicao fisica do candidato \n";
		cin >> saude;
	
		if (idade > 17 && sexo == "M" && saude == "Boa")
		{
			aptoM = aptoM + 1;
		}
			else if(idade > 17 && sexo == "F" && saude == "Boa")
			{
				aptoF = aptoF + 1;
			}
				else if (sexo == "M")
				{
					inaptoM = inaptoM + 1;
				}
					else
					{	
						inaptoF = inaptoF + 1;
					}
		cont = cont - 1;				
	}
	
	cout << "O numero de candidatos masculinos aptos e " << aptoM << "\n";
	cout << "O numero de candidatos femininos aptos e " << aptoF << "\n";
	cout << "O numero de candidatos masculinos inaptos e " << inaptoM << "\n";
	cout << "O numero de candidatos femininos inaptos e " << inaptoF << "\n";
}
