#include <iostream>
using namespace std;

class Student
{
    string name;

public:
    int age;
    bool gender;

    Student()
    {
        cout << "Default Constructor" << endl;
    } // Default Constructor

    Student(string s, int a, bool g)
    {
        cout << "Parameterized Constructor" << endl;
        name = s;
        age = a;
        gender = g;
    } // Parameterized Constructor

    Student(Student &a)
    {
        cout << "Copy Constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    } // Copy Constructor

    // ~Student()
    // {
    //     cout << "Destructor called" << endl;
    // }

    void setName(string s)
    {
        name = s;
    }

    void getName()
    {
        cout << name << endl;
    }

    void printInfo()
    {
        cout << "Name : \n";
        cout << name << endl;
        cout << "Age : \n";
        cout << age << endl;
        cout << "Gender : \n";
        cout << gender;
        cout << "\n";
    }

    bool operator==(Student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    // Student a;
    // a.name = "Ananya";
    // a.age = 20;
    // a.gender = 1;

    // Student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cout << "Name : \n";
    //     cin >> s;
    //     arr[i].setName(s);
    //     cout << "Age : \n";
    //     cin >> arr[i].age;
    //     cout << "Gender : \n";
    //     cin >> arr[i].gender;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printInfo();
    // }

    Student s1("Ananya", 20, 1);
    // s1.printInfo();
    Student s2("Ananya", 22, 1);
    Student s3 = s1;

    if (s2 == s1)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not Same" << endl;
    }
    return 0;
}