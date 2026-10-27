#include <iostream>
using namespace std;
class student
{
public:
    int rollno, age;
    string name, gender;
    void getdata()
    {
        cout<<"Enter roll number, age, name and gender of student: ";
        cin>>rollno>>age>>name>>gender;
    }
    void display()
    {
        cout<<"Student: "<<rollno<<" "<<age<<" "<<name<<" "<<gender<<endl;
    }
};
class teacher
{
public:
    int id, experience;
    string name, expertise;
    void getdata()
    {
        cout<<"Enter ID, experience, name and expertise of teacher: ";
        cin>>id>>experience>>name>>expertise;
    }
    void display()
    {
        cout<<"\nTeacher: "<<id<< " "<<experience<<" "<<name<<" "<<expertise;
    }
};
int main()
{
    student s;
    teacher t;
    s.getdata();
    t.getdata();
    s.display();
    t.display();
    return 0;
}
