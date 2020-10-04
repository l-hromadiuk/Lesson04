/*Даны числа A, B, C (число A не равно 0). Рассмотрев дискриминант
D = B2– 4·A·C, проверить истинность высказывания: «Квадратное уравне-
ние A·x2+ B·x + C = 0 имеет вещественные корни».*/

#include <iostream>

using namespace std;
bool calcul(int a, int b,int c) {

	bool isreal = ((b*b-4*a*c)>=0);

	return isreal;
}
int main()
{
	int n, b,c;
	cout << "Enter 3 real numbers(a,b,c) ";
	cin >> n >> b>>c;
	bool p = calcul(n, b,c);
	cout << p;
	return 0;
}
