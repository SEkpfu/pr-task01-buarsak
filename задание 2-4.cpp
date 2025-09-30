// задание 2-4
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	double a, b, c, d;
	cout << "Введите часы работника=" << endl;
	cin >> a;//часы
	cout << "Введите ставка работника=" << endl;
	cin >> b;//ставка
	cout << "Введите процент премии=" << endl;
	cin >> c;//%премии
	cout << "Общая заработная плата=" << (a * b) + ((a * b / 100) * 13) << endl;
	d = ((a * b) + ((a * b / 100) * 13)) / 100 * 13;//сумма подоходного налога
	cout << "Сумма подоходного налога=" << d << endl;
	cout << "Сумма получаемая на руки=" << ((a * b) + ((a * b / 100) * 13)) - d << endl;
	return 0;
}