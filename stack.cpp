#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack()
{
	begin = NULL;
}

void Stack::create()
{
	node *t;
	t = begin;
	int x;
	cin >> x;
	while (x != 0)
	{
		t = new(node);
		t->value = x;
		t->next = begin;
		begin = t;
		cin >> x;
	}
}

void Stack::add(int x)
{
	node* t = new(node);
	t->value = x;
	t->next = begin;
	begin = t;
}

int Stack::next()
{
	node* t = begin;
	if (t != NULL)
	{

		begin = begin->next;
		int x = t->value;
		delete t;
		return x;
	}
	else return 0;
}

void Stack::show()
{
	node* t = begin;
	while (t != NULL)
	{
		cout << t->value << ' ';
		t = t->next;
	}
}

void Stack::delete_el()
{
	node* t = begin;
	begin = begin->next;
	delete t;
}

void Stack::clear()
{
	node* t, * t2;
	t = begin;
	t2 = begin;
	while (t2 != NULL)
	{
		t = t2;
		t2 = t->next;
		delete t;
	}
}