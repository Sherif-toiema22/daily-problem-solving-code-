#include<bits/stdc++.h>
using namespace std;
// 5 4
// 1 3 5 7 9
// 6 4 2 8
// 3 2 1 4

int main(){
    int x,y; 
    cin>>x >> y;
    int arr[x], ar[y];
    int sArr[x],sAr[y];
    for (int i = 0; i < x; i++)
    {
        cin>> arr[i];
        sArr[i]=arr[i];
        /* code */
    }
    for (int i = 0; i < y; i++)
    {
        cin>> ar[i];
        sAr[i]=ar[i];
        /* code */
    }
    sort(sArr,sArr+x);
    sort(sAr,sAr+y);

    map<int,int> mp;
    int j=0,k=0;
    for (int i = 0; i < x; i++)
    {
        if(sArr[i]>sAr[j]){
                
            mp[sAr[j]]=k;
            j++;    
        }
        else{
            k++;
        
        }
        
    }
    for (int i = 0; i < y; i++)
    {
        cout<<mp[ar[i]]<< " ";
        /* code */
    }
    
    
    
}