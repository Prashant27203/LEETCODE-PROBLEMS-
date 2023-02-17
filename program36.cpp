#include<bits/stdc++.h>
using namespace std;
int partition(int *a,int lb,int ub)
{
    int pivot=a[lb];
    int start=lb;
    int end=ub;
    while(start<=end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(a[start],a[end]);
        }
    }
    swap(a[lb],a[end]);
    return end;
}
void quick(int *a,int lb,int ub)
{
    int loc=0;
    if(lb<=ub)
    {
        loc=partition(a,lb,ub);
        quick(a,lb,loc-1);
        quick(a,loc+1,ub);
    }
}
void display(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
    cout<<a[i]<<"<<--<<"<<endl;
    }
}
int main()
{
    int n = 0;
    int lb = 0;
    cout << "Enter the Size of the Array " << endl;
    cin >> n;
    int ub = n - 1;
    int a[n];
    cout << "Enter the Array " << endl;
    for (int i = 0; i < n; i++)
    {
    cin >> a[i];
    }
    quick(a, lb, ub);
    display(a, n);
}