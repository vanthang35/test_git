#ifndef STUDENT_H
#define STUDENT_H


#include <iostream>
#include <iomanip>
#include <Person.h>
class Student : public Person
{
    private:
    float gpa = 0.0;
    string currentCourse;
    const string studentId;
    static int numStudents;
    public:
    Student();
    Student(const string &, const string &, char, const string &, Address*, float, const string &, const string &);
    Student( const Student&);
    ~Student();
    void Print() const;

    float GetGPA() const {return gpa;}
    const string &GetCurrentCourse() const {return currentCourse;}
    const string &GetStudentId() const {return studentId;}
    void SetCurrentCourse(const string &);
    static int GetNumberStudents();
    void ApplyUniversity();
    void DropUniversity();
    void RegisterCourse();
    void CancelCourse();
    
};
#endif
