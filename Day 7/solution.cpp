// #include <iostream>
// #include <queue>
// #include <set>
// #include <vector>

// using namespace std;

// int main(){
    // int m, n;   
    // cin >> m >> n;
    // set<int> st;
    


    // for(int i = 1; i <= n; i++){
    //     st.insert(i);
    // }
    // for(int i = 0; i < m; i++){
    //     int l,r;
    //     cin >> l >> r;
    //     for(int j = l; j <= r; j++){

    //         st.erase(j);
            
    //     }
    // }
    // st.size()>0? cout<< st.size() << endl: cout << 0 << endl;
    // for(auto it = st.begin(); it != st.end(); it++){
    //     cout << *it << " ";
    // }
    
    //smart one

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
// #ifdef _DEBUG
// 	freopen("input.txt", "r", stdin);
// //	freopen("output.txt", "w", stdout);
// #endif
	
// 	int n, m;
// 	cin >> n >> m;
// 	vector<int> cnt(m + 2);
// 	for (int i = 0; i < n; ++i) {
// 		int l, r;
// 		cin >> l >> r;
// 		++cnt[l];
// 		--cnt[r + 1];
// 	}
// 	for (int i = 1; i <= m; ++i)
// 		cnt[i] += cnt[i - 1];
	
// 	vector<int> ans;
// 	for (int i = 1; i <= m; ++i) {
// 		if (cnt[i] == 0)
// 			ans.push_back(i);
// 	}
	
// 	cout << ans.size() << endl;
// 	for (auto it : ans) cout << it << " ";
// 	cout << endl;
	
// 	return 0;
// }

//     return 0;

// the best answer

#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int arr[102];
    int point, segm;
    cin >> point >> segm;
    for(int i = 0; i < point; i++) {
        int x, y;
        cin >> x >> y;
        for(int i = x; i <= y; i++) {
            arr[i] = 44;
        }
    }
    int num = 0;
    for(int i = 1; i <= segm; i++) {
        if(arr[i] != 44) num++;
    }
    cout << num << endl;
    for(int i = 1; i <= segm; i++) {
        if(arr[i] != 44) cout << i << " ";
    }
    cout << endl;
    
    return 0;
}