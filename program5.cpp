#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    cout<<"Enter the Size of the Array "<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l,r,sum,min_l,min_r,minsum;
    min_l=0;
    min_r=1;
    minsum=a[0]+a[1];
    for(l=0;l<n-1;l++)
    {
        for(int r=l+1;r<n;r++)
        {
            sum=a[r]+a[l];
            if(abs(minsum)>abs(sum))
            {
                minsum=sum;
                min_l=l;
                min_r=r;
            }
        }
    }
    cout<<"The Elements with the least sum is = "<<a[min_l]<<" "<<a[min_r]<<endl;
    return 0;
}