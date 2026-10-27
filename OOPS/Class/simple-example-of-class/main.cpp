#include <iostream>
using namespace std;
class calculator
{
    int a, b; 
public: 
    int add()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
        return(a + b);
    }
};
int main()
{
    calculator cal;
    int c=cal.add();
    cout << "c=" << c;
    return 0;
}