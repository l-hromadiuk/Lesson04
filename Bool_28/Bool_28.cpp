/*Даны числа x, y. Проверить истинность высказывания: «Точка с ко-
ординатами (x, y) лежит в первой или третьей координатной четверти».*/

#include <iostream>
using namespace std;
bool calcul(int x, int y) {

	bool isreal = (x > 0 && y>0)||(x < 0 && y < 0);

	return isreal;
}
int main()
{
	int x, y;
	cout << "Enter x,y ";
	cin >> x >> y;
	bool p = calcul(x, y);
	cout << p;
	return 0;
}