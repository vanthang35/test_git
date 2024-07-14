#include <Person.h>
#include <Student.h>
#include <Professor.h>
#include <Address.h>
#include <University.h>
#include <Room.h>

void InitUniversity(University* University, vector<Student *> &s, vector<Professor *> &p)
{
    int a = s.size();
    int b = p.size();
    cout << "Truong Dai hoc " << University->GetUniversityName() << " thanh lap voi " << a << " sinh vien va " << b << " giao su";
}

int main()
{
    Address *add1 = new Address("Da Nang", "Cam Le", "131 Che Viet Tan", 55000);
    Address *add2 = new Address("Ha Noi", "Ba Dinh", "12 Le Hong Phong", 100000);
    Address *add3 = new Address("Ho Chi Minh", "District 1", "123 Nguyen Hue", 700000);

    Student* s1 = new Student("Jo", "Li", 'U', "Ms.", add1, 3.9, "C++", "178PSU");
    Student* s2 = new Student("Alice", "Nguyen", 'B', "Ms.", add2, 3.7, "Mathematics", "456PSU");
    Student* s3 = new Student("Bob", "Tran", 'A', "Mr.", add3, 3.8, "Physics", "789PSU");

    Professor* p1 = new Professor("John", "Doe", 'A', "Mr.", add1, "123456");
    Professor* p2 = new Professor("Emma", "Smith", 'B', "Ms.", add2, "654321");
    Professor* p3 = new Professor("David", "Brown", 'C', "Dr.", add3, "987654");
    vector<Student *> students = {s1, s2, s3};
    vector<Professor *> professors = {p1, p2, p3};
    University *Uni = new University("Bach Khoa");
    InitUniversity(Uni, students, professors);
    cout << s1->GetCity() << s1->GetWard() << s1->GetnumStreet()<<endl;
    s1->Print();
    p1->Print();
    Room *room1 = new Room("room1");
    delete add1;
    delete add2;
    delete add3;
    delete s1;
    delete s2;
    delete s3;
    delete p1;
    delete p2;
    delete p3;
    return 0;
}