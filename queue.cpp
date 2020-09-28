#include <iostream>
#include "queue.h"

Queue::Queue()
{
	beg = NULL;
	end = NULL;
	count = 0;
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
		count++;
		cin >> x;
		while (x != 0)
		{
			t = new(node);
			t->value = x;
			t->next = NULL;
			end->next = t;
			end = t;
			count++;
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

int Queue::getCount()
{
	return count;
}

void Queue::add(int x)
{
	node* t = new(node);
	t->value = x;
	if (beg == NULL)
		beg = t;
	t->next = NULL;
	if (end != NULL)
		end->next = t;
	end = t;
	count++;
}

int Queue::next()
{
	node* t = beg;
	beg = beg->next;
	int x = t->value;
	delete t;
	count--;
	return x;
}

void Queue::delete_el()
{
	node* t = beg;
	beg = beg->next;
	count--;
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