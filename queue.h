#include <iostream>
#include <clocale>

using namespace std;


class Queue {
	struct node
	{
		int value;
		node* next;
	};
private:
	node* beg, * end;
public:
	Queue();
	void create();
	void show();
	void add(int);
	int next();
	void delete_el();
	void clear();
};