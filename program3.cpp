#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool ispalin(string st)
{
    for(int i=0,j=st.length()-1;i<j;i++,j--)
    {
        if(st[i]!=st[j])
        {
            return false;
        }
    }
}
int main()
{
    string s=" ";
    cout<<"Enter a string "<<endl;
    getline(cin,s);
    if(ispalin(s))
    {
        cout<<"The Given String is a palindromic string "<<endl;
    }
    else
    {
        cout<<"The Given String is not a palindromic string "<<endl;
    }
    return 0;
}