#include <iostream>
#include <vector>
#include <list>
#include<bits/stdc++.h>
using namespace std;
//brute force 
/*vector<int> findnegative(vector<int> v, int n, int k)
{
    vector<int> l;
    for (int i = 0; i <= n - k; i++)
    {
        list<int> li;
        for (int j = i; j < i + k; j++)
        {
            if (v[j] < 0)
            {
                li.push_back(v[j]);
            }
        }
        if (!li.empty())
        {
            l.push_back(li.front());
        }
        else
        {
            l.push_back(0);
        }
    }
    return l;
}
*/
#include <iostream>
#include <vector>
#include <deque> // include deque header for using deque container
using namespace std;

vector<int> findnegative(vector<int> v, int n, int k)
{
    int start = 0;
    int end = 0;
    vector<int> res;
    deque<int> ans;
    while (end < n)
    {
        if (v[end] < 0)
        {
            ans.push_back(v[end]);
        }
        if (end - start + 1 < k) // changed to "<" instead of "<="
        {
            end++;
        }
        else if (end - start + 1 == k)
        {
            if (ans.empty()) // changed to "empty()" instead of "size()==0"
            {
                res.push_back(0);
            }
            else
            {
                res.push_back(ans.front());
                if (v[start] < 0)
                {
                    ans.pop_front();
                }
                start++;
                end++;
            }
        }
    }
    return res;
}

void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, k;
    cout << "Enter the size of the vector: " << endl;
    cin >> n;
    cout << "Enter the vector of size n: " << endl;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "Enter the size of K: " << endl;
    cin >> k;
    vector<int> t = findnegative(v, n, k);
    display(t);
    return 0;
}