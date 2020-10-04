/*Дано целое число A. Проверить истинность высказывания: «Число
A является положительным».*/

#include <iostream>
using namespace std;
bool calcul(int n) {
	bool isreal= n > 0;

	return isreal;
}
int main()
{
	int n;
	cout << "Enter a number ";
	cin >> n;
	bool p = calcul(n);
	cout << p;
	return 0;
}
