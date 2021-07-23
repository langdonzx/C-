#include <iostream>
#include <stdio.h>
#include <locale.h>


using namespace std;
int main(void)
{
	setlocale(LC_ALL,"Portuguese");
char NOME[40];
 cout << "Informe seu nome: ";
 cin >> NOME;
 using namespace std;
 int num1, num2;
 cout << "Informe o valor do num1: "; 
 cin >> num1;
 cout << "Informe o valor de num2: "; 
 cin >> num2;
cout << "O nome digitado foi: " << NOME <<"\n";
cout << "O resultado é: " << num1/num2 <<"\n";

 return 0;

}
