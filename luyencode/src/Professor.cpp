#include <Professor.h>


Professor::Professor(const string &fn, const string &ln, char mi, const string &t, Address* add,const string &ID)
    :Person(fn, ln, mi, t, add), EmployeeID(ID)
{
    //
}
Professor::~Professor()
{
    //
}
void Professor::Print()
{
    cout<< GetFirstName() << " " << GetLastName() << " got Emplpoyee ID:" << GetEmployeeId() <<  endl;
}
