#include <iostream>
#include <clocale>
#include <fstream>
#include "queue.h"
#include "stack.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    char exit;
    do
    {

        ifstream input("input.txt");
        if (!input.is_open())
        {
            cout << "Файл не существует.";
            return -1;
        }

        Queue queue;
        int t;
        while (!input.eof())
        {
            input >> t;
            queue.add(t);
        }

        cout << "Последовательность : ";
        queue.show();
        cout << endl;

        int x, y;
        cout << "Введите значения, которые необходимо заменить : ";
        cin >> x;

        cout << "Введите значения, на которые необходимо заменить : ";
        cin >> y;


        int count = queue.getCount();
        for (int i = 0; i < count; i++)
        {
            int q = queue.next();
            if (q == x) queue.add(y);
            else queue.add(q);
        }

        cout << "Новая последовательность : ";
        queue.show();
        queue.clear();
        input.close();
        cout << endl;
        cout << "Введите e для выхода : ";
        cin >> exit;
    } while (exit != 'e');
    return 0;
}