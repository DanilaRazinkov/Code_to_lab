#include <iostream>
#include "queue.h"

Queue::Queue()
{
	beg = NULL;
	end = NULL;
}

void Queue::create()
{
	node* t;
	t = beg;
	int x;
	cin >> x;
	if (x != 0)
	{
		t = new(node);
		t->value = x;
		t->next = NULL;
		beg = t;
		end = t;
		cin >> x;
		while (x != 0)
		{
			t = new(node);
			t->value = x;
			t->next = NULL;
			end->next = t;
			end = t;
			cin >> x;
		}
	}
	else
	{
		t = NULL;
		beg = t;
		end = t;
	}
}

void Queue::show()
{
	node* t = beg;
	while (t != NULL)
	{
		cout << t->value << ' ';
		t = t->next;
	}
}

void Queue::add(int x)
{
	node* t = new(node);
	t->value = x;
	t->next = NULL;
	end->next = t;
	end = t;
}

int Queue::next()
{
	node* t = beg;
	beg = beg->next;
	int x = t->value;
	delete t;
	return x;
}

void Queue::delete_el()
{
	node* t = beg;
	beg = beg->next;
	delete t;
}

void Queue::clear()
{
	node* t, * t2;
	t = beg;
	t2 = beg;
	while (t2 != NULL)
	{
		t = t2;
		t2 = t->next;
		delete t;
	}
}