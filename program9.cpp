#include<iostream>
using namespace std;
class a
{
    public:
    int y;
    int z;
    int x;
    a(int x,int y,int z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
    void operator ++()
    {
        x++;
        y++;
        z++;
    }
    void show()
    {
        cout<<"X ="<<x<<endl;
        cout<<"Y ="<<y<<endl;
        cout<<"Z ="<<z<<endl;
    }
};
int main()
{
    a obj(10 , 11 ,12);
    cout<<"Before Incrementing"<<endl;
    obj.show();
    obj.operator++();
    cout<<"After Incrementing"<<endl;
    obj.show();
    return 0;
}