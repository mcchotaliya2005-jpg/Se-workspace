#include <iostream>
using namespace std;

// Base class
class Person
{
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a)
    {
        name = n;
        age = a;
    }

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class: Student
class Student : public Person
{
private:
    int rollNo;

public:
    void setStudent(string n, int a, int r)
    {
        setPerson(n, a);
        rollNo = r;
    }

    void displayStudent()
    {
        displayPerson();
        cout << "Roll No: " << rollNo << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person
{
private:
    string subject;

public:
    void setTeacher(string n, int a, string s)
    {
        setPerson(n, a);
        subject = s;
    }

    void displayTeacher()
    {
        displayPerson();
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    Student s;
    Teacher t;

    s.setStudent("Manan", 20, 101);
    cout << "\nStudent Details:" << endl;
    s.displayStudent();

    t.setTeacher("Mr. Patel", 40, "Computer Science");
    cout << "\nTeacher Details:" << endl;
    t.displayTeacher();

    return 0;
}
