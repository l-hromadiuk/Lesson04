/*Дано целое положительное число. Проверить истинность высказы-
вания: «Данное число является нечетным трехзначным».*/

#include <iostream>
using namespace std;
bool calcul(int n) {

	bool isreal = (n%2==1)&&((n/100)<=9&& (n / 100) !=0);

	return isreal;
}
int main()
{
	int n;
	cout << "Enter a real number ";
	cin >> n;
	bool p = calcul(n);
	cout << p;
	return 0;
}
