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
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Введите действие(+,-,*,/): ";
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
	cout << "Введите кол-во страниц: ";
	cin >> a;
	cout << "Введите кол-во строк на странице: ";
	cin >> b;
	cout << "Введите кол-во символов в строке: ";
	cin >> c;
	cout << "Введите исчисление одного символа в битах: ";
	cin >> d;
TryAgain:
	cout << "Введите в какой единице хотите увидить результат(B,KB,MB,GB): ";
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
		cout << "Вес текста = " << a * b * c * d / 8 << " байт.";
	}
	if (e == "kb")
	{
		cout << "Вес текста = " << (a * b * c * d) / 8 / 1000 << " килобайт.";
	}
	if (e == "mb")
	{
		cout << "Вес текста = " << (a * b * c * d) / 8 / 1000 / 1000  << " мегабайт.";
	}
	if (e == "gb")
	{
		cout << "Вес текста = " << (a * b * c * d) / 8 / 1024 / 1024 / 1024 << " гигабайт.";
	}
	else
	{
		cout << endl << "Вы неправильно ввели тип размера данных!" << endl;
		goto TryAgain;
	}
}
void podshet()
{
	setlocale(LC_ALL, "RUS");
	string b;
	cout << "Введите текст: ";
	cin >> b;
	int a = b.length();
	int c;
	cout << endl << "Введите вес одного символа: ";
	cin >> c;
	cout << "Вес текста =  " << a * c;
}
void kolvosimv()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c;
	cout << "Введите кол-во страниц: ";
	cin >> a;
	cout << "Введите кол-во строк на странице: ";
	cin >> b;
	cout << "Введите кол-во символов в строке: ";
	cin >> c;
	cout << "Количество символов = " << a * b * c;
}

int main()  
{
	setlocale(LC_ALL, "RUS");
	string e;
	std::this_thread::sleep_for(std::chrono::milliseconds(250));
Try:
	cout << "Введите функцию, которую хотите использовать(KS,PS,PSB,CALC,NEIZVSSS(Английскими буквами)): ";
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
	cout << endl << endl << "Программа завершилась(Возможно вы неправильно ввели данные)! Можете заново выбрать функцию!" << endl << endl;
	goto Try;
	system("PAUSE");
	return 0;
}
