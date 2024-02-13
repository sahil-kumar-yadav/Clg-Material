#include <iostream>

using namespace std;

class Student
{
    public:
    char name[30];
    int rollno;

public:
    void getdata(void);

    void display(void);
};

void Student::getdata(void)
{
    cout << "Enter your name ";
    cin >> name;
    cout << "Enter you roll no ";
    cin >> rollno;
}

void Student::display(void)
{

    cout << "name is " << name << endl;
    cout << "roll no is " << rollno << endl;
}

int main()
{
    Student obj;
    obj.getdata();
    obj.display();

    return 0;
}