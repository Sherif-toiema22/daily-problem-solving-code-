#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b) 
{
    while (b){a%=b;swap(a,b);}
    return a;
}

long long lcm(long long a,long long b) {
    return a/gcd(a,b)*b;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, a,b;
        cin >>l>>a>>b;
        long long ga =gcd(a,l);
        long long gb= gcd(b,l);
        long long ans=l/lcm(ga,gb);
        cout<<ans <<"\n";
    }
    return 0;
}