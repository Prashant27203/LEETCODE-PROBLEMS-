#include<iostream>
using namespace std;
class A 
{
    public:
    int x;
    void setx(int x)
    {
        this->x=x;
    }
    int getx()
    {
        return x;
    }
};
int main()
{
A *ptr=new A;
ptr->setx(25);
cout<<ptr->getx();
free(ptr);
return 0;
}