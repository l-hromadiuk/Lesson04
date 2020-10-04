/*С начала суток прошло N секунд (N — целое). Найти количество
полных часов, прошедших с начала суток.*/

#include <iostream>
using namespace std;
int calcul(int n) {
	n /= 3600;

	return n;
}
int main()
{
	int n;
	cout << "Enter a number of seconds ";
	cin >> n;
	int p = calcul(n);
	cout << p;
}