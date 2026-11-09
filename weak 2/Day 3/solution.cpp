#include<bits/stdc++.h>
using namespace std;

// 4 100 2
// 20 30 75 80
// 17
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int a[n], diff[n];
    int total=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        

    }
    
    total=a[n-1]-a[0]+1;

    for(int i=0;i<n-1;i++){
        diff[i]=a[i+1]-a[i]-1;
    }
    sort(diff,diff+n-1,greater<int>());
    for(int i=0;i<k-1;i++){
        
        total-=diff[i];
    }

    cout<<total<<"\n";


}