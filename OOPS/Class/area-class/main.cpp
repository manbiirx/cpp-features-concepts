#include <iostream>
using namespace std;
class area
{
public:
    void calculate()
    {
        int s, l, b, base, h,r;
        float pi = 3.14;
        cout<<"Enter side of square: ";
        cin>>s;
        cout<<"Area of square = "<<s * s<<endl;
        cout<<"Enter length and breadth: ";
        cin>>l>>b;
        cout<<"Area of rectangle = "<<l * b<<endl;
        cout<<"Enter base and height of triangle: ";
        cin>>base>>h;
        cout<<"Area of triangle = "<<0.5 * base * h<<endl;
        cout<<"Enter radius of circle: ";
        cin>>r;
        cout<<"Area of circle = "<<pi * r * r<<endl;
    }
};
int main()
{
    area a;
    a.calculate();
    return 0;
}
