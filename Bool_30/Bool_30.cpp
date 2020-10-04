/*Даны целые числа a, b, c, являющиеся сторонами некоторого тре-
угольника. Проверить истинность высказывания: «Треугольник со сторо-
нами a, b, c является равносторонним».*/

#include <iostream>
using namespace std;
bool calcul(int a, int b,int c) {

	bool isreal = (a==b)&& (c == b)&& (a == c);

	return isreal;
}
int main()
{
	int a, b,c;
	cout << "Enter a,b,c ";
	cin >> a >> b>>c;
	bool p = calcul(a, b,c);
	cout << p;
	return 0;
}
