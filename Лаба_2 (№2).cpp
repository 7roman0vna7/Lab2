#include <iostream>
using namespace std;

int fibonachi(int x) {             //функция для нахождения Фибоначи
	if (x == 0)
		return x;
	if (x == 1)
		return x;
	else
		return fibonachi(x - 1) + fibonachi(x - 2);
}

int main() {
	setlocale(0, "");
	int x = 0;
	int s = 0;
	cout << "Введите число: " << endl;
	cin >> x;
	while (s <= x) {
		cout << fibonachi(s) << endl;
		s++;
	}
	return 0;
}
