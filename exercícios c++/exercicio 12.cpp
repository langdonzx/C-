#include <iostream>
#include <stdio.h>
using namespace std;
int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	int n1, n2,n3,n4;
	cout << "Informe o valor de n1:";
	cin >> n1;
	cout <<"Informe o valor de n2:";
	cin >> n2;
	cout <<"Informe o valor de n3:";
	cin >> n3;
	cout << "Informe um quarto valor: ";
	cin >> n4; 
	cout <<"O resultado �: " << (n1+n2+n3) * n4<< "\n";

	


}
