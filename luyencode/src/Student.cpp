#include <Student.h>
#include <Person.h>
int Student::numStudents = 0;
Student::Student(const string &fn, const string &ln, 
        char  mi, const string &t, float avg, const string &course, const string &id) : Person(fn, ln, mi, t),
        gpa(avg), currentCourse(course), studentId(id)
{
    numStudents++;
}

Student::Student(const Student& s) : Person(s), gpa(s.gpa)
        , currentCourse(s.currentCourse), studentId(s.studentId)
{
    numStudents++;   
}
Student::~Student()
{
    numStudents--;
}
inline void Student::SetCurrentCourse(const string &c)
{
    currentCourse = c;
}
void Student::Print() const
{
    cout << GetTitle() << " " << GetFirstName() << " ";
    cout << "van thang" << endl;

}
// void Student::EarnPhD()
// {
//     // ModifyTitle("Dr.");
// }



        

    