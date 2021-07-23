#include <iostream>
#include <stdio.h>

using namespace std;
int main(void)
{
	setlocale(LC_ALL,"Portuguese");
 int num1, num2;
 cout << "Informe o valor do num1: "; 
 cin >> num1;
 cout << "Informe o valor de num2: "; 
 cin >> num2;
 cout << "A diferença entre os números é: " << num1-num2 <<"\n";

 return 0;

}

