#include <bits/stdc++.h>
using namespace std;

int partition(int *a, int lb, int ub)
{
    int pivot = a[ub];
    int start = lb;
    int end = ub - 1;
    while (start <= end)
    {
        while (a[start] < pivot && start <= ub - 1)
        {
            start++;
        }
        while (a[end] >= pivot && end >= lb)
        {
            end--;
        }
        if (start < end)
        {
            swap(a[start], a[end]);
        }
    }
    swap(a[ub], a[start]);
    return start;
}

void quick(int *a, int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(a, lb, ub);
        quick(a, lb, loc - 1);
        quick(a, loc + 1, ub);
    }
}

void display(int *a, int n)
{
    cout << "CONTENT OF THE ARRAY IS =" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n = 0;
    cout << "Enter the Size of the Array: ";
    cin >> n;
    int a[n];
    cout << "Enter the Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quick(a, 0, n - 1);
    display(a, n);
    return 0;
}
