#include <iostream>
#include <clocale>
#include "queue.h"
#include "stack.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	char exit;
	do
	{

		Queue stack;

		cout << "������� ������������������ : ";
		stack.create();

		cout << "������������������ : ";
		stack.show();
		cout << endl;
		char mot;
		do
		{
			cout << "�������� �������� : 1 - �������� �������, 2 - ������� �������, 3 - ������� � ��������� " <<
				" e - �����" << endl;
			cin >> mot;
			switch (mot)
			{
			case '1':
			{
				cout << "������� �������� �������� : ";
				int x;
				cin >> x;
				stack.add(x);
			}
			break;
			case '2':
			{
				stack.delete_el();
			}
			break;
			case '3':
			{
				int x = stack.next();
				cout << "�������, � ������ ������������������ : " << x << endl;
			}
			break;
			}

			cout << "����� ������������������ : ";
			stack.show();
			cout << endl;
		} while (mot != 'e');
		stack.clear();


		cout << endl;
		cout << "������� e ��� ������ : ";
		cin >> exit;
	} while (exit != 'e');
	return 0;
}
