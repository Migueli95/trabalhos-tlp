#include <iostream>
#include <locale.h>
#include <string>

void main()
{
	using namespace std;
	setlocale(LC_ALL, "Portuguese");
	int arraiao[10], i, contar = 0, somar = 0;
	char skibidi;

	for (i = 0; i < 10; i++)
	{
		cout << "D�-me uma lista de 10 n�meros -> ";
		cin >> arraiao[i];
	}
	system("cls");
	cout << "Queres contar(c) quantos negativos escreveste ou somar(s) todos os negativos? -> ";
	cin >> skibidi;
	switch (skibidi)
	{
	case'c':
		case'C':
			for (i = 0; i < 10; i++)
			{
				if (arraiao[i] < 0)
				{
					contar = contar + 1;
				}
			}
			cout << "Escreveste " << contar << " n�meros negativos";
			break;
		case's':
		case'S':
			for (i = 0; i < 10; i++)
			{
				if (arraiao[i] < 0)
				{
					somar = somar + arraiao[i];
				}
			}
			cout << "A soma dos n�meros negativos que escreveste � " << somar;
			break;
	}

}