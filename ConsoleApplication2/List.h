#pragma once
#include <iostream>
#include <List>

using namespace std;

class List
{
private:
	list<char>list1;
	list<char>list2;
public:
	List(list<char>);

	void operator- (const list<char>& list2);

	void operator == (list<char>);

	char & operator [](int index);

	void output();

	~List();

};
