//������� 7#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	double a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, a, b, c, d, e;
	cout << "���������� ����� ������ ��� 1,2,3,4,5 ��������" << endl;
	cin >> a1;
	cin >> a2;
	cin >> a3;
	cin >> a4;
	cin >> a5;
	cout << "������ ������ ��� 1,2,3,4,5 ��������" << endl;
	cin >> b1;
	cin >> b2;
	cin >> b3;
	cin >> b4;
	cin >> b5;
	a = a1 * b1 / 100 * 13;
	b = a2 * b2 / 100 * 13;
	c = a3 * b3 / 100 * 13;
	d = a4 * b4 / 100 * 13;
	e = a5 * b5 / 100 * 13;
	cout << "����� ������������ ������ �������=" << a1 * b1 - a << endl;
	cout << "����� ������������ ������ �������=" << a2 * b2 - b << endl;
	cout << "����� ������������ ������� �������=" << a3 * b3 - c << endl;
	cout << "����� ������������ ��������� �������=" << a4 * b4 - d << endl;
	cout << "����� ������������ ����� �������=" << a5 * b5 - e << endl;
	cout << "������� �������� �������=" << ((a1 * b1 + a2 * b2 + a3 * b3 + a4 * b4 + a5 * b5) - (a + b + c + d + e)) / 5 << endl;
	return 0;
}