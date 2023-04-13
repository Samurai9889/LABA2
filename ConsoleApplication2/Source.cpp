#include <iostream>
#include <list>
#include "List.h"  

using namespace std;

List::List(list<char>list1)
{
    this->list1 = list1;
    cout << "constructor with parameters was called" << endl;
};

void List:: operator - (const list<char>& list2)
{
    list1.remove_if
    (
        [&list2](const char& elem)
        {
            return find(list2.begin(), list2.end(), elem) != list2.end();
        }
    );
}; 


void List :: operator == (list<char> list2)
{
    string line1, line2;
    for (auto it = this->list1.begin(); it != this->list1.end(); it++)
    {
        line1 += *it;
    }
    for (auto it = list2.begin(); it != list2.end(); it++)
    {
        line2 += *it;
    }
    if (line1 == line2)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
};


void List::output()
{
    string line{};
    for (auto it = list1.begin(); it != list1.end(); it++)
    {
        line += *it;
    }
    cout << line << endl;
};

List::~List()
{
    cout << "destructor was called" << endl;
}