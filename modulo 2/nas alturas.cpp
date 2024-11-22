#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int alunos[2][30],i,j,mediaaltura=0,alunosbaixos=0;

	
		for (i = 0; i < 30; i++)
		{
			cout << "dá me a idade do "<< i+1<< "º aluno - ";
			cin >> alunos[0][i];
			cout << "dá me a altura do " << i+1 << "º aluno - ";
			cin >> alunos[1][i];
		}

		for (i = 0; i < 30; i++)
		{
			mediaaltura = mediaaltura + alunos[1][i];
	    }

		mediaaltura = mediaaltura / 30;
		cout << mediaaltura;

		for (i = 0; i < 30; i++) 
		{
				if (alunos[0][i] > 13 && alunos[1][i]<mediaaltura)
				{
					alunosbaixos = alunosbaixos + 1;
				}
	    }
		
		cout << "\nExistem " << alunosbaixos << " alunos com mais de 13 anos com altura menor à média";
}