#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findsum(int n)
{vector<int>v;
int r=0;
int k=0;
    while(n>0)
    {
        r=n%10;
        v[k++]=r;
        n=n/10;
    }
sort(v.begin(),v.end());
int n1=v[0]+v[2];
int n2=v[1]+v[3];
return n1+n2;
}
int main()
{
    int n=0;
    cout<<"Enter a Number"<<endl;
    cin>>n;
    cout<<"The minimum sum of the digits is = "<<findsum(n);
    return 0;
}