#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while(t--)
     {
        int n, k;
        cin >>n>> k;
        vector<int> a(n +1);
        for (int i=1;i<=n;i++) {
            cin >>a[i];
        }

        vector<int> pref(n +1,0);
        for (int i=2;i<=n;i++) {
            pref[i] =pref[i-1] + (a[i]!=a[i-1]);
        }
        int ans =0;
        for (int i=1;i<=k;i++)
         {
            int l = i;
            int r = n-k+i;

            if (pref[r] -pref[l]==0) {
                ans++;
            }
        }
        cout << ans<<'\n';
    }
    return 0;
}