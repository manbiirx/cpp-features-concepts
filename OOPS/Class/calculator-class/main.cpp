#include <iostream>
using namespace std;
class calculator
{
    int a, b;
public:
    void getdata()
    {
        cout<<"Enter two numbers: ";
        cin>>a>>b;
    }
    void display()
    {
        cout<<"Addition = "<<a + b<<endl;
        cout<<"Subtraction = "<< a-b<<endl;
        cout<<"Multiplication = "<<a * b<<endl;
        cout<<"Division = "<<(float) a / b<<endl;
        cout<<"Square of a = "<<a * a<<endl;
        cout<<"Cube of a = "<<a * a * a<<endl;
        cout<<"Square of b = "<<b * b<<endl;
        cout<<"Cube of b = "<<b * b * b<<endl;
    }
};
int main()
{
    calculator cal;
    cal.getdata();
    cal.display();
    return 0;
}
