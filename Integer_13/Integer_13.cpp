/* Дано трехзначное число. В нем зачеркнули первую слева цифру и
приписали ее справа. Вывести полученное число.
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
	cout << b << a;

	return c;
}
int main()
{
	int x;
	cout << "Enter a number(3 DIGITS) ";
	cin >> x;
	int p = calcul(x);
	cout << p;
}


