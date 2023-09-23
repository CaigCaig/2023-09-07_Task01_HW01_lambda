#include <iostream>
#include <Windows.h>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	auto arr = { 4, 7, 9, 14, 12 };

	cout << "Входные данные: ";
	for_each(arr.begin(), arr.end(), [](const int& i) {cout << i << ' '; });
	cout << endl;

	cout << "Выходные данные: ";
	for_each(arr.begin(), arr.end(), [](const int& i)
		{
			switch (i % 2)
			{
			case 0:
				cout << i << ' ';
				break;
			case 1:
				cout << i * 3 << ' ';
			}
		});
	cout << endl;

	system("pause");
}