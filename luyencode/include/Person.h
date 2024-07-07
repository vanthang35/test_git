#ifndef TASK1_H
#define TASK1_H

#include <iostream>
#include <iomanip>
using namespace std;

class Person
{
    private:
    string firstName;
    string lastName;
    char middleInitial = '\0';
    string title;
    protected:
    void ModifyTitle(const string &);
    public:
    Person() = default;
    Person(const string &, const string &, char, const string &);
    virtual ~Person();
    const string &GetFirstName() const {return firstName;}
    const string &GetLastName() const {return lastName;}
    const string &GetTitle() const {return title;}
    char GetMiddleInitial() const {return middleInitial;}
    virtual void Print() const;
    virtual void IsA() const;
    virtual void Greeting(const string &) const;
};
#endif