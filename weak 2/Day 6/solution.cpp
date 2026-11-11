#include <bits/stdc++.h>
#define LetsGo ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
//https://codeforces.com/contest/81/problem/A
int main()
{
    LetsGo;
    int x,y;
    cin>>x>>y;
    vector<int>v;
    for(int i=0;i<x;i++){
        int c;cin>>c;
        v.push_back(c);
    }
    sort(v.begin(),v.end());
    while(y--){
        int test;cin>>test;
        int ans=upper_bound(v.begin(),v.end(),test) - v.begin();
        cout<<ans<<"\n";
    }

 return 0;
}