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

		cout << "Ââåäèòå ïîñëåäîâàòåëüíîñòü : ";
		stack.create();

		cout << "Ïîñëåäîâàòåëüíîñòü : ";
		stack.show();
		cout << endl;
		char mot;
		do
		{
			cout << "Âûáåðèòå äåéñòâèå : 1 - äîáàâèòü ýëåìåíò, 2 - óäàëèòü ýëåìåíò, 3 - ïåðåéòè ê ñëåäóùåìó " <<
				" e - âûõîä" << endl;
			cin >> mot;
			switch (mot)
			{
			case '1':
			{
				cout << "Ââåäèòå çíà÷åíèå ýëåìåíòà : ";
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
				cout << "Ýëåìåíò, ñ íà÷àëà ïîñëåäîâàòåëüíîñòè : " << x << endl;
			}
			break;
			}

			cout << "Íîâàÿ ïîñëåäîâàòåëüíîñòü : ";
			stack.show();
			cout << endl;
		} while (mot != 'e');
		stack.clear();


		cout << endl;
		cout << "Ââåäèòå e äëÿ âûõîäà : ";
		cin >> exit;
	} while (exit != 'e');
	return 0;
}