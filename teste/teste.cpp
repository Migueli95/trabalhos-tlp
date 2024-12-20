#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tamanho,i;
    cout << "qual o tamanho da palavra que vais dizer? - ";
    cin >> tamanho;
    char palavra[100];
    cout << "dá-me uma palavra - ";
    for (i = 0; i < tamanho; i++)
    {
        cin >> palavra[i];
    }
    cout << "a tua palavra na língua dos p fica: ";
    for (i = 0; i < tamanho; i++)
    {
            if (palavra[i]=='a'||palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
            {
                cout << palavra[i] << "p" << palavra[i];
            }else cout << palavra[i];
    }
}