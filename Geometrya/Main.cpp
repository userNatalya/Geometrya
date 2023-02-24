//Geometrya
#include <iostream>
using namespace std;
//#define SQUARE
#define TRIANGLE_1
//#define TRIANGLE_2
#define TRIANGLE_3
#define TRIANGLE_4
void main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите количество звездочек:";
	cin >> n;
#ifdef SQUARE


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE
	//Start		Stop	Step

#ifndef TRIANGLE_1

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1
	//Ctrl Shift Q-Дефайндить.Обернуть-Ctrl+K+S,Ctrl+пробел +ТАБ
#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2
#ifndef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // !TRIANGLE_3
#ifndef TRIANGLE_4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << "  ";
		for (int j = 0; j <= i; j++)cout << "* ";
		cout << endl;
	}
#endif // !TRIANGLE_4

}