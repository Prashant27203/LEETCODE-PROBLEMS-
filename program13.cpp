#include <iostream>
using namespace std;
class a
{
public:
    string s;
    a()
    {
    }
    a(string s)
    {
        this->s=s;
    }
    a friend operator+(a h, a k);
    void show()
    {
        cout<<"Overloaded String is "<<s<<endl;
    }
};
a operator+(a h, a k)
{
   a d1;
   d1.s=h.s+k.s;
   return d1;
}
int main()
{
    a obj("geeks");
    a obj1("forgeeks");
    a obj3 = obj + obj1;
    obj3.show();
    return 0;
}