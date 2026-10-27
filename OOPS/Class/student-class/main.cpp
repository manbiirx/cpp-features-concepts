#include <iostream>
using namespace std;
class student
{
    int rollno;
    string name;
public:
    void getdata()
    {
        cout << "Enter roll number and name: ";
        cin >> rollno >> name;
    }
    void display()
    {
        cout << "Roll number = " << rollno << endl;
        cout << "Name = " << name;
    }
};
int main()
{
    student s;
    s.getdata();
    s.display();
    return 0;
}