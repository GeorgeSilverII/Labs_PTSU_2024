﻿/*Создать программу анализа полученного числа. Если оно
меньше 5, то умножить его на 3. Если оно от 5 до 7, то
поделить на 10. Если больше 7, то прибавить 3.*/

#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Введите число" << endl;
	cin >> a;
	if (a < 5)
	{
		cout << a * 3 << endl;
	}
	if (a > 7)
	{
		cout << a + 3 << endl;
	}
	if (a>=5 and a<=7)
	{
		cout << a / 10 << endl;
	}
	return 0;
}