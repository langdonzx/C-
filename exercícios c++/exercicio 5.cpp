#include <iostream> 
#include <locale.h>

using namespace std;
int main(void)
{
	setlocale(LC_ALL,"Portuguese");
 int num1, num2, resultado;
 cout << "Informe o valor do num1: "; 
 cin >> num1;
 cout << "Informe o valor de num2: "; 
 cin >> num2;
 cout << "O resultado é: " << num1 + num2 <<"\n";

 return 0;

}
