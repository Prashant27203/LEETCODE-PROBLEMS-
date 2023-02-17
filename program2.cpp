#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sort_it(string s[])
{
    sort(s,s+10);
    cout<<"The Strings in the sorted order is ---->"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<s[i]<<endl;
    }
}
int main()
{
    string s[10];
    cout<<"Enter the Names --->"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>s[i];
    }
    sort_it(s);
    return 0;
}