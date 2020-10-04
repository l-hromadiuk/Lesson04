/*Дано целое положительное число. Проверить истинность высказы-
вания: «Данное число является четным двузначным».*/

#include <iostream>
using namespace std;
bool calcul(int n) {

	bool isreal = (n % 2 == 0) && ((n / 10) <= 9 && (n / 10) != 0);

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
