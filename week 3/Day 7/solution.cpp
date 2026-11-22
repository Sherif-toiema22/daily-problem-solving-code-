#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void SherifSolves() {
    int n, k;
    cin >>n>>k;
    string s;
    cin >> s;
    vector<int>v1;
    int len =1;
    
    for (int i = 1;i<n;++i) {
        if (s[i] ==s[i-1]) {
            len++;
        } else {
            v1.push_back(len);
            len = 1;
        }
    }
    v1.push_back(len);
    int transitions =0;
    for (int i = 1;i<n;++i) 
    {
        if (s[i]!=s[i-1]) {
            transitions++;
        }
    }

    int max_transitions =transitions+min(k,(n-1)-transitions);
    int blocks =max_transitions+1;

    vector<int> sz(blocks, 1);
    int rem = n -blocks;
    for (int i = 0; i <rem;++i) {
        sz[i % blocks]++;
    }

    long long ans=1;
    for (int l : sz) {
        ans+= l *(l+1)/2;
    }
    long long prefix_sum=0;
    for (int l:sz) {
        ans +=prefix_sum*l;
        prefix_sum+=l;
    }
    if (n == 1 && k>=1) {
        ans = 2;
    }
    cout << ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        SherifSolves();
    }
    return 0;
}