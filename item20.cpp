//
// Created by guang on 2020/6/1.
//
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Person()" << endl;
    }

    virtual ~Person()
    {
        cout << "~Person()" << endl;
    }

    virtual void display()
    {
        cout << "Person display" << endl;
    }

    std::string name;
    std::string address;
};

class Student: public Person
{
public:
    Student()
    {
        cout << "Student()" << endl;
    }
    ~Student()
    {
        cout << "~Student()" << endl;
    }

    virtual void display()
    {
        cout << "Student display" << endl;
    }


    std::string schoolName;
    std::string schoolAddress;
};

void func(const Person &p)
{
    p.display();
}

int main()
{
    Student s;
    func(s);

    return 0;
}
