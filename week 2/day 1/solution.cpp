#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    long long a[n];
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long total = 0;
    long long j=2;
    for (long long i = 0; i < n; i++) {
        while (j < n && a[j] - a[i] <= m) {
            j++;
        }
        long long d = j - i - 1;
        total += d * (d - 1) / 2;
    }




    cout << total << endl;
    return 0;
}
