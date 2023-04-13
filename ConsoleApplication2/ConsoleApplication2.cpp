#include <iostream>
#include <list>
#include "List.h"  

using namespace std;

void main()
{
	list<char> list1 = { '5', '7', '9', '9', '6' };
	list<char> list2 = { '1', '3', '5', '7', '3' };

	List list1class(list1);
	List list2class(list2);

	list1class - list2;
	list1class == list2;
	//list1class[1];
	list1class.output();
};