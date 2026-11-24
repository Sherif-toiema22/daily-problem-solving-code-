#include<bits/stdc++.h>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<string,int> mp;
        mp[s]++;
        if(mp[s]<2){
            cout<<"OK"<<endl;
        }
        else {
            cout<<s<<mp[s]-1<<endl;
        }
    }
    
    
    return 0;
}