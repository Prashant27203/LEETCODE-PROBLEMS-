#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class hello
{
    private:
    int x;
    public:
    void getx(int x)
    {
        this->x=x;
    }
    friend void show(hello);
};
void show(hello h)
{
    cout<<"The value of x is "<<h.x<<endl;
}
int main()
{
hello h;
h.getx(25);
show(h);
return 0;
}