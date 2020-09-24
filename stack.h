#include <iostream>
#include <clocale>

using namespace std;

class Stack
{
	struct node
	{
		int value;
		node* next;
	};
private:
	node* begin;
public:
	Stack();
	int next();
	void create();
	void show();
	void add(int);
	void delete_el();
	void clear();
};