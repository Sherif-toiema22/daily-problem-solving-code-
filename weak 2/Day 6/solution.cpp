// #include <bits/stdc++.h>
// #define LetsGo ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// using namespace std;
// //https://codeforces.com/contest/81/problem/A
// int main()
// {
//     LetsGo;
//     int x,y;
//     cin>>x>>y;
//     vector<int>v;
//     for(int i=0;i<x;i++){
//         int c;cin>>c;
//         v.push_back(c);
//     }
//     sort(v.begin(),v.end());
//     while(y--){
//         int test;cin>>test;
//         int ans=upper_bound(v.begin(),v.end(),test) - v.begin();
//         cout<<ans<<"\n";
//     }

//  return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    vector<int> arr(x), ar(y);

    for (int i = 0; i < x; i++)
        cin >> arr[i];

    for (int i = 0; i < y; i++)
        cin >> ar[i];

    vector<int> sArr = arr;
    vector<int> sAr = ar;

    sort(sArr.begin(), sArr.end());
    sort(sAr.begin(), sAr.end());

    map<int, int> mp;

    int i = 0;
    int j = 0;

    while (j < y) {

        while (i < x && sArr[i] <= sAr[j]) {
            i++;
        }

        mp[sAr[j]] = i;
        j++;
    }

    for (int i = 0; i < y; i++) {
        cout << mp[ar[i]] << " ";
    }

    return 0;
}
