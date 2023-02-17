#include<iostream>
using namespace std;
class base
{
    public :
    int x;
    int y;
    base(int x,int y):x(x) ,y(y)
    {

    }
};
class child:public base
{
    public:
    child(int x,int y ):base(x,y)
    {

    }
    void sum()
    {
        cout<<x+y<<endl;
    }
};
int main()
{
    child obj(22,33);
    obj.sum();
    return 0;
}