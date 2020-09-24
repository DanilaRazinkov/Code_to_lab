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

		cout << "Введите последовательность : ";
		stack.create();

		cout << "Последовательность : ";
		stack.show();
		cout << endl;
		char mot;
		do
		{
			cout << "Выберите действие : 1 - добавить элемент, 2 - удалить элемент, 3 - перейти к следущему " <<
				" e - выход" << endl;
			cin >> mot;
			switch (mot)
			{
			case '1':
			{
				cout << "Введите значение элемента : ";
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
				cout << "Элемент, с начала последовательности : " << x << endl;
			}
			break;
			}

			cout << "Новая последовательность : ";
			stack.show();
			cout << endl;
		} while (mot != 'e');
		stack.clear();


		cout << endl;
		cout << "Введите e для выхода : ";
		cin >> exit;
	} while (exit != 'e');
	return 0;
}
