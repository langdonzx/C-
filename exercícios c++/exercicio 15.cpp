#include <math.h>
#include <iostream>

using namespace std;
int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	int x,y;
	cout << "Informe a medida de x: ";
	cin >> x;
	cout << "Informe a medida de y: ";
	cin >>y;
	int area;
	area = x*y;
	cout << "A medida da área é: " << area << "\n";
	
return 0;
	
}
