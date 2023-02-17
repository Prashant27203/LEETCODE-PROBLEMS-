#include<iostream>
using namespace std;
// brute force 
/*int findmaxsum(int a[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0; // initialize sum to 0
        for (int j = i; j < i + 3; j++)
        {
            sum += a[j];
        }
        if (max < sum)
        {
            max = sum;
        }
    }
    return max;
}*/

//optimal Solution
int findmaxsum(int a[],int n,int k)
{
    int maxsum=0;
    int currsum=0;
    for(int i=0;i<k;i++)
    {
        currsum+=a[i];
    }
    maxsum=currsum;
    for(int i=k;i<n;i++)
    {
        currsum = currsum+a[i] - a[i - k] ;
        maxsum=max(maxsum,currsum);
    }
return maxsum;
}
int main()
{
    int n=0;
    cout<<"Enter the Size of the Array "<<endl;
    cin>>n;
    int a[n];
    int k=0;
    cout<<"Enter the Window Size"<<endl;
    cin>>k;
    cout<<"Enter the Array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
cout<<"The Sum of the consective three elements is ="<<findmaxsum(a,n,k); 
    return 0;
}