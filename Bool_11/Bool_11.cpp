/*Даны два целых числа: A, B. Проверить истинность высказывания:
«Числа A и B имеют одинаковую четность».*/

#include <iostream>
using namespace std;
bool calcul(int n,int b) {

	bool isreal = (n % 2 == b % 2);

	return isreal;
}
int main()
{
	int n,b;
	cout << "Enter 2 real numbers ";
	cin >> n>>b;
	bool p = calcul(n,b);
	cout << p;
	return 0;
}
