#include<iostream>
using namespace std;
class A 
{
    public:
     virtual void abc()
     {
        cout<<"Hello Hi "<<endl;
     }
};
class B :virtual public A
{
    public:
    void abc()
    {
        cout<<"Hi Hello"<<endl;
    }
};
int main()
{
    B D;
    A *ptr = &D;
    ptr->abc();
    return 0;
}