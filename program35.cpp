#include <bits/stdc++.h>
using namespace std;

vector<int> concatenate(const vector<int> &A, int k) {
    vector<int> B(A);
    if (k == 1)
        return A;
    while (k > 1) {
        if (k & 1)
            B.insert(B.end(), A.begin(), A.end());
        k >>= 1;
        vector<int> C(B);
        B.insert(B.end(), C.begin(), C.end());
    }
    return B;
}

int main() {
    vector<int> A = {1, 2, 3};
    int k = 5;
    vector<int> B = concatenate(A, k);
    for (int x : B) cout << x << " ";
    cout << endl;
    return 0;
}
