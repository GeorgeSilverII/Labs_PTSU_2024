﻿/*Вычислить сумму S = −1 + 2 − 3 + 4 − 5 + 6−. . . до N слагаемых.*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n % 2 == 0)cout << n / 2;
	else cout << (n / 2) - n;
	return 0;
}