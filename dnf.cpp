#include <bits/stdc++.h>
using namespace std;
void dnf(int *arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (low <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "<-<" << endl;
    }
}
int main()
{
    int n = 0;
    cout << "Enter the Size of the Array " << endl;
    cin >> n;
    int a[n];
    cout << "Enter the Array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    dnf(a, n);
    cout << "The Sorted Array is =" << endl;
    display(a, n);
    return 0;
}