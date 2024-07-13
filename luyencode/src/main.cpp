#include <Person.h>
#include <Student.h>
#include <Professor.h>
#include <Address.h>
#include <Room.h>
int main()
{
    Address *add1 =  new Address("Da Nang", "Cam Le" , " 131 Che Viet Tan" , 55000);
    Student* s1 =  new Student("Jo", "Li", 'U', "Ms.", add1, 3.9, "C++", "178PSU");
    Professor* p1 =  new Professor("John", "Doe", 'A', "Mr.", add1, "123456");
    cout << s1->GetCity() << endl;
    s1->Print();
    p1->Print();
    Room *room1 = new Room("room1");
    return 0;
}