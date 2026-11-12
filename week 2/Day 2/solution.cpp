#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b.begin(),b.end());

int k=0,l=0;
if(n%2)
l=1;
else
l=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            a[i]=b[k];
            k++;
            
        }
        else{
            a[i]=b[n/2+l];
            l++;
            
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}