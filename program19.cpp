#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    ofstream obj("sample.txt");
    obj<<"Hello world I am a coder"<<endl;
    obj.close();
    ifstream obj1("sample.txt");
    string line;
    while( getline(obj1,line))
    { cout<<line<<endl;}
    obj1.close();
    return 0; 
}