#include <stdio.h>
#include <iostream>
 using namespace std;
 int main(void)
 
{	
setlocale (LC_ALL,"Portuguese");
float nota1,nota2,nota3,nota4;
cout <<"digite a nota1:";
cin >> nota1;
cout <<"digite a nota2:";
cin >> nota2;
cout <<"digite a nota3:";
cin >> nota3;
cout <<"digite a nota4:";
cin >> nota4;
cout << "o resultado é: " <<(nota1 + nota2 + nota3 + nota4 ) / 4 <<"\n";	
return 0;	
 
}
