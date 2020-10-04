/*С начала суток прошло N секунд (N — целое). Найти количество се-
кунд, прошедших с начала последней минуты.*/
#include <iostream>

using namespace std;
int calcul(int n) {
	n %= 60;

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