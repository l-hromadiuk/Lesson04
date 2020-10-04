/*Дано трехзначное число. Вывести число, полученное при перестановке цифр сотен и десятков исходного числа (например, 123 перейдет в 213).*/


#include <iostream>
using namespace std;
int calcul(int x) {
	int a, b, c;
	a = x % 10;
	x /= 10;
	b = x % 10;
	x /= 10;
	c = x % 10;
	cout << b << c;

	return a;
}
int main()
{
	int x;
	cout << "Enter a number(3 DIGITS) ";
	cin >> x;
	int p = calcul(x);
	cout << p;
}