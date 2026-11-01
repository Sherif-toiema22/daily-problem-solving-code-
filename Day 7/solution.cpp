#include <iostream>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main(){
    int m, n;   
    cin >> m >> n;
    set<int> st;
    


    for(int i = 1; i <= n; i++){
        st.insert(i);
    }
    for(int i = 0; i < m; i++){
        int l,r;
        cin >> l >> r;
        for(int j = l; j <= r; j++){

            st.erase(j);
            
        }
    }
    st.size()>0? cout<< st.size() << endl: cout << 0 << endl;
    for(auto it = st.begin(); it != st.end(); it++){
        cout << *it << " ";
    }
    
    
    return 0;
}