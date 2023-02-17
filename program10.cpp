#include <iostream>
using namespace std;
class a
{
public:
    int y;
    int z;
    int x;
    public:
    a(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    friend void operator ++(a &);
    
    void show()
    {
        cout << "X =" << x << endl;
        cout << "Y =" << y << endl;
        cout << "Z =" << z << endl;
    }
};
void operator ++(a &h)
{
    h.x++;
    h.y++;
    h.z++;
}
int main()
{
    a obj(10, 11, 12);
    cout << "Before Incrementing" << endl;
    obj.show();
    ++obj;
    cout << "After Incrementing" << endl;
    obj.show();
    return 0;
}