// ������� 2-4
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	double a, b, c, d;
	cout << "������� ���� ���������=" << endl;
	cin >> a;//����
	cout << "������� ������ ���������=" << endl;
	cin >> b;//������
	cout << "������� ������� ������=" << endl;
	cin >> c;//%������
	cout << "����� ���������� �����=" << (a * b) + ((a * b / 100) * 13) << endl;
	d = ((a * b) + ((a * b / 100) * 13)) / 100 * 13;//����� ����������� ������
	cout << "����� ����������� ������=" << d << endl;
	cout << "����� ���������� �� ����=" << ((a * b) + ((a * b / 100) * 13)) - d << endl;
	return 0;
}