#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n;
    string s;
    cin >>n >>s;
    if (n %2==1) {
        cout<<"NO\n";
        return;
    }
    bool alternating =true;
    for (int i =1;i < n; ++i) {
        if (s[i]==s[i -1]) {
            alternating =false;
            break;
        }
    }

    if (alternating) {
        cout<<"NO\n";
    } else {
        cout<<"YES\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while (t--) {
        solve();
    }

    return 0;
}