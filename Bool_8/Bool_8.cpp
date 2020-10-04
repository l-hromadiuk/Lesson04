/*Даны два целых числа: A, B. Проверить истинность высказывания:
«Каждое из чисел A и B нечетное».*/
#include <iostream>
using namespace std;
bool calcul(int n,int b) {
	bool isreal = (n % 2 == 1)&&(b%2==1);

	return isreal;
}
int main()
{
	int n,b;
	cout << "Enter numbers ";
	cin >> n>>b;
	bool p = calcul(n,b);
	cout << p;
	return 0;
}
