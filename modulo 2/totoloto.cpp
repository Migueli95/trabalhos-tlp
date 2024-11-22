#include <iostream>
#include <locale.h>
#include <cstdlib>

void main()
{
	using namespace std;
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int numeros[5], i, respostas[5], j, acertou = 0, verificar = 0;

	do{
		for (i = 0; i < 5; i++)
		{
			numeros[i] = rand() % 6 + 1;
		}
		for (i = 0; i < 5; i++)
		{
			for (j = 1; j < 5; j++)
			{
					if (numeros[i] == numeros[j])
					{
						verificar = verificar + 1;
					}
			}
		}
       }while (verificar == 0);
	
	for (i = 0; i < 5; i++)
	{
		cout << numeros[i] << "\n";
	}

	for (i = 0; i < 5; i++)
	{
		cout << "Qual o " << i + 1 << "º número que queres? --> ";
		cin >> respostas[i];
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (respostas[i] == numeros[j])
			{
				acertou = acertou + 1;
			}

		}
	}
	for (i = 1; i < 5; i++)
	{
		if (acertou == i)
		{
			cout << "acertaste " << i <<" números";
		}
	}
	if (acertou == 0)
	{
		cout << "não acertaste nenhum número";
	}
	if (acertou == 5)
	{
		cout << "BRAVO, ganhaste 1 milhão de bitcoins";
	}
}