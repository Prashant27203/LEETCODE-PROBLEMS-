#include<iostream>
using namespace std;
class hello
{
    public:
    static int ctr;
    hello()
    {
        this->ctr++;
    }
    static void show();
};
int hello::ctr=0;
void hello::show()
{
    cout<<"The Counter's value is "<<hello::ctr<<endl;
}
int main()
{
    hello h1;
    hello h2;
    hello h3;
    hello h4;
    hello h5;
    hello::show();
    return 0;
}