#include <iostream>
#include <iomanip>

#include <Person.h>

Person::Person(const string &fn, const string &ln, char mi, const string &t, Address* add)
: firstName(fn), lastName(ln), middleInitial(mi), title(t), address(add)
{

}
Person::~Person()
{

}

void Person::Print() const
{

}

