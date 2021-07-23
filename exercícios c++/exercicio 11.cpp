#include <iostream>
#include <stdio.h>
using namespace std;
int main(void)
{
setlocale (LC_ALL,"Portuguese");	
int numero;
cout << "Digite um numero inteiro: ";
cin >> numero;
if (numero%2 == 0)
{
	cout<<"par";
}
else
    cout<<"Impar";
}
