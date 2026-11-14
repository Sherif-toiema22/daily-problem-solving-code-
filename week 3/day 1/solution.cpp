#include <bits/stdc++.h>
using namespace std;
// 8
// 2 7 1 8 2 8 1 8
// 5
int main() {
    long long n;
    cin >> n;
    int numOfUnique = 0;
    vector<long long> arr(n);
    vector<long long> ar(n);
    for (long long i = 0; i < n; i++) {
        cin >> ar[i];
        arr[ar[i]]++;

    }
    int s=0;
    for (long long i = 0; i < n; i++) {
        if(ar[i] == arr[ar[i]] || arr[ar[i]] == -1){
            continue;
        }
        else if (ar[i] > arr[ar[i]] && arr[ar[i]] > 0) {
            s+=  ar[i] - arr[ar[i]];
            arr[ar[i]] = -1;
        }
        else  if (ar[i] < arr[ar[i]] && arr[ar[i]] > 0) {
            s+=  arr[ar[i]];
            arr[ar[i]] = -1;
        }

        
    }

    cout << s << endl;
return 0;
}
    