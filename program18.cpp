#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string line;
    string content;
    ifstream obj("sample.txt");
    while(getline(obj,line))
    {
        content+=line+'\n';
    }
    obj.close();

    string word;
    cout << "Enter a string " << endl;
    cin >> word;
    int ctr = 0;
    size_t pos = 0;
    while ((pos = content.find(word, pos)) != string::npos)
    {
        ctr++;
        pos++;
}
cout<<"Word count ="<<ctr<<endl;
return 0;
}