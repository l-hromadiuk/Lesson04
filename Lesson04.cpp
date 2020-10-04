/*Дано трехзначное число. Вывести число, полученное при прочтении
исходного числа справа налево.
*/

#include <iostream>
using namespace std;
int calcul(int x) {
	int a, b, c;
	a = x % 10;
	x /= 10;
	b = x % 10;
	x /= 10;
	c = x % 10;
	cout << a << b;

	return c;
}
int main()
{
	int x;
	cout << "Enter a number(3 DIGITS) ";
	cin >> x;
	int p = calcul(x);
	cout << p;
	return 0;
   
}

