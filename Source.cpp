#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <chrono>
#include <thread>
#include <ctime>
#include <cstdlib>
using namespace std;
void calc()
{
	setlocale(LC_ALL, "RUS");
	string d;
	double a, b;
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> b;
	cout << "������� ��������(+,-,*,/): ";
	cin >> d;
	if (d == "+")
	{
		cout << a << " + " << b << " = " << a + b;
	}
	if (d == "-")
	{
		cout << a << " - " << b << " = " << a - b;
	}
	if (d == "*")
	{
		cout << a << " * " << b << " = " << a * b;
	}
	if (d == "/" || d == ":")
	{
		cout << a << " / " << b << " = " << a / b;
	}
}
void ssss()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c, d;
	string e;
	cout << "������� ���-�� �������: ";
	cin >> a;
	cout << "������� ���-�� ����� �� ��������: ";
	cin >> b;
	cout << "������� ���-�� �������� � ������: ";
	cin >> c;
	cout << "������� ���������� ������ ������� � �����: ";
	cin >> d;
TryAgain:
	cout << "������� � ����� ������� ������ ������� ���������(B,KB,MB,GB): ";
	cin >> e;
	transform(e.begin(), e.end(), e.begin(), ::tolower);
	if (a < 1)
	{
		a = a + 1;
	}
	if (b < 1)
	{
		b = b + 1;
	}
	if (c < 1)
	{
		c = c + 1;
	}
	if (e == "b")
	{
		cout << "��� ������ = " << a * b * c * d / 8 << " ����.";
	}
	if (e == "kb")
	{
		cout << "��� ������ = " << (a * b * c * d) / 8 / 1000 << " ��������.";
	}
	if (e == "mb")
	{
		cout << "��� ������ = " << (a * b * c * d) / 8 / 1000 / 1000  << " ��������.";
	}
	if (e == "gb")
	{
		cout << "��� ������ = " << (a * b * c * d) / 8 / 1024 / 1024 / 1024 << " ��������.";
	}
	else
	{
		cout << endl << "�� ����������� ����� ��� ������� ������!" << endl;
		goto TryAgain;
	}
}
void podshet()
{
	setlocale(LC_ALL, "RUS");
	string b;
	cout << "������� �����: ";
	cin >> b;
	int a = b.length();
	int c;
	cout << endl << "������� ��� ������ �������: ";
	cin >> c;
	cout << "��� ������ =  " << a * c;
}
void kolvosimv()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c;
	cout << "������� ���-�� �������: ";
	cin >> a;
	cout << "������� ���-�� ����� �� ��������: ";
	cin >> b;
	cout << "������� ���-�� �������� � ������: ";
	cin >> c;
	cout << "���������� �������� = " << a * b * c;
}

int main()  
{
	setlocale(LC_ALL, "RUS");
	string e;
	std::this_thread::sleep_for(std::chrono::milliseconds(250));
Try:
	cout << "������� �������, ������� ������ ������������(KS,PS,PSB,CALC,NEIZVSSS(����������� �������)): ";
	cin >> e;
	transform(e.begin(), e.end(), e.begin(), ::tolower);
	if (e == "ks")
	{
		kolvosimv();
	}
	if (e == "ps")
	{
		podshet();
	}
	if (e == "psb")
	{
		ssss();
	}
	if (e == "calc")
	{
		calc();
	}
	cout << endl << endl << "��������� �����������(�������� �� ����������� ����� ������)! ������ ������ ������� �������!" << endl << endl;
	goto Try;
	system("PAUSE");
	return 0;
}