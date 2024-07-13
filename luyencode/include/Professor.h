#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <Person.h>

class Professor:public Person
{
    private:
    string EmployeeID;
    
    public:
    Professor(const string &, const string &, char, const string &, Address*,const string &);
    ~Professor();
    const string & GetEmployeeId() const{return EmployeeID;}
    void Print();



};
#endif