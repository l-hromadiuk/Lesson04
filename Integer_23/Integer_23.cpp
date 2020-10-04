/*С начала суток прошло N секунд (N — целое). Найти количество
полных минут, прошедших с начала последнего часа.*/

#include <iostream>
using namespace std;
int calcul(int n) {
	n %= 3600;
	n /= 60;

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
