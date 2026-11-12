#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    long long a[n];
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    int s=0,mn=0;
    for (int i = 0; i < m; i++) {
        s+=a[i];
    }
    int solu=1;
    mn=s;
    for (int i = 1; i <= n - m; i++) {
        s+=a[i+m-1]-a[i-1];
        mn=min(mn,s);
        if(s<mn){
            solu=i+1;
        }
        
    }
    cout << solu << endl;

}
