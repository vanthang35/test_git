#include <iostream>
#include <Address.h>
#include <Student.h>
#include <Professor.h>
#include <vector>
#include <Department.h>
using namespace std;


class University
{
    private:
    string UniversityName;
    Address * address;
    vector<Student *> students;
    vector<Professor*> professors;
    // vector<Department *> departments;

    public:
    University(const string & );
    ~University();
    const string &GetUniversityName() const {return UniversityName;}
    void Addstudent(Student *);
    void RemoveStudent(Student *);
    void AddProfessor(Professor *);
    void RemoveProfessor(Professor *);
    



};