#include<iostream>
using namespace std;
class A 
{
    public:
    virtual double area()=0;
};
class B:virtual public A
{
    public:
    int length,width;
    B(int length,int width):length(length),width(width){};
    double area()
    {
        return length*width;
    }
};
int main()
{
    B obj(25,30);
    cout<<obj.area();
    return 0;
}