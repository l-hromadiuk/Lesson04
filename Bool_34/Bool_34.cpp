/*Даны координаты поля шахматной доски x, y (целые числа, лежа-
щие в диапазоне 1–8). Учитывая, что левое нижнее поле доски (1, 1) явля-
ется черным, проверить истинность высказывания: «Данное поле является
белым».*/

#include <iostream>
using namespace std;
bool calcul(int x, int y) {

	bool isreal = (x%2==0 &&y%2==1)||(x%2==1 && y%2==0);

	return isreal;
}
int main()
{
	int x, y;
	cout << "Enter x,y ";
	cin >>x >> y ;
	bool p = calcul(x, y);
	cout << p;
	return 0;
}