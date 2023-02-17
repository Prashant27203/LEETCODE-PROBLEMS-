#include<iostream>
using namespace std;
#include<fstream>
int main()
{
 string line;
 cout<<"Enter a string "<<endl;
getline(cin,line);
ofstream obj("sample.txt");
obj<<line<<endl;   
obj.close();
ifstream obj1("sample.txt");
string l;
getline(obj1,l);
cout<<l;
obj1.close();
}