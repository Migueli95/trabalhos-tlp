#include <iostream>
#include <string>
#include <locale.h>

void main()
{
	using namespace std;
	setlocale(LC_ALL, "Portuguese");
	string nomes[5], resposta;
	int i;
	

	do
	{
		system("cls");
		cout << "----Quero uma lista de 5 nomes----\n";
		for (i = 0; i < 5; i++)
		{
			cout << "Diz-me o "<< i+1 << "� nome--> " ;
			cin >> nomes[i];
		}

		cout << "Os nomes s�o:\n";

		for (i = 4; i > -1; i--)
		{
			cout <<  nomes[i]<<"\n";
		}
		cout << "\nQueres sair? --> ";
		cin >> resposta;
	} while (resposta == "n�o"||"N�o");
}