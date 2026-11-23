#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int ans=101;
    vector<int>arr(size);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<size-1;i++){
        if(arr[i]<arr[i+1]){
            ans=arr[i+1];
            break;
        }
    }
   if(ans==101){
       cout<<"NO";
   }
   else{
       cout<<ans;
   }
   return 0;
}