#ifndef TASK1_H
#define TASK1_H

#include <iostream>
#include <iomanip>
#include <Address.h>
using namespace std;
class Address;
class Person
{
    private:
    string firstName;
    string lastName;
    char middleInitial = '\0';
    string title;
    Address *address;
    protected:
    void ModifyTitle(const string &);
    public:
    Person() = default;
    Person(const string &, const string &, char, const string &, Address*);
    virtual ~Person();
    const string &GetFirstName() const {return firstName;}
    const string &GetLastName() const {return lastName;}
    const string &GetTitle() const {return title;}
    // const string &GetCity() cosnt {return address}
    char GetMiddleInitial() const {return middleInitial;}
    const string &GetCity()const {return address->GetCity();}
    const string &GetWard()const {return address->GetWard();}
    const string &GetnumStreet()const {return address->GetnumStreet();}
    int GetZipcode()const {return address->GetZipcode();}
    virtual void Print() const;

};
#endif