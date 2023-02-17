#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
class sorted
{
    public:
    string st[10];
    sorted(string *s )
    {
        
    }
    string sort_it(string st)
    {
        char temp =' ';
        for(int i=0;i<st.length();i++)
        {
            for(int j=0;j<st.length()-1;j++)
            {
                    if(st[j]>st[j+1])
                    {
                        temp=st[j];
                        st[j]=st[j+1];
                        st[j+1]=temp;
                    }
            }
        }
        return st;
    }
    void show(string st)
    {
        cout<<"The Sorted String is = "<<st<<endl;
    }

};
int main()
{
    string st=" ";
    cout<<"Enter A  String "<<endl;
    cin>>st;
    sorted obj(st);
    string s=obj.sort_it(st);
    obj.show(s);
    return 0;
}