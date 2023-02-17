#include <iostream>
using namespace std;
class a
{
public:
    int x;
    int y;
    int z;
    a()
    {
    }
    a(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    a friend operator+(a h,a k);
    void show()
    {
        cout << "X =" << x << endl;
        cout << "Y =" << y << endl;
        cout << "Z =" << z << endl;
    }
};
a operator+(a h,a k)
{
    a d1;
    d1.x = k.x + h.x;
    d1.y = k.y + h.y;
    d1.z = k.z + h.z;
    return d1;
}
int main()
{
    a obj(10, 25, 30);
    a obj1(35, 40, 45);
    a obj3 = obj + obj1;
    obj3.show();
    return 0;
}