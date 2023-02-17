#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> findnegative(int a[], int n, int k)
{
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<k;j++)
        {
            if(a[j]<0)
            {
                v.push_back(a[j]);
                break;
            }
        }
    }
return v;
}
int main()
{
    int n = 0;
    int k = 0;
    cout << "Enter the Array Size: ";
    cin >> n;
    int a[n];
    cout << "Enter the Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the Size of the Subarray: ";
    cin >> k;
   vector<int>o=findnegative(a,n,k);
    for(int i=0;i<o.size();i++)
    {
         cout<<o[i]<<" ";
    }
     return 0;
}