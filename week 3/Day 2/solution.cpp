#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int A[x],B[y];
    vector<int> C;
    for(int i=0;i<x;i++){
        cin>>A[i];
        C.push_back(A[i]);
    }
    for(int i=0;i<y;i++){
        cin>>B[i];
        C.push_back(B[i]);
    }
    sort(C.begin(), C.end());
    vector<int> D;
    for(int i=0;i<C.size();i++){
        if(C[i]!=C[i+1]){
            D.push_back(C[i]);
        }
        else{
            i++;

        }

        
        
    }
    for(int i=0;i<D.size();i++){
        cout<<D[i]<<" ";
    }
    
   
    return 0;
}