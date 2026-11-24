#include <bits/stdc++.h>
using namespace std;
#define fast  ios::sync_with_stdio(false), cin.tie(nullptr) , cout.tie(nullptr);
int main()
{
    fast;
    stack<string>sk;
    set<string >st;
    int n;
    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        sk.push(s);
    }
    cout<<sk.top()<<"\n";
    st.insert(sk.top());
    sk.pop();
    while(sk.size()){
        if(st.end()==st.find(sk.top()))
        {
            st.insert(sk.top());
            cout<<sk.top()<<endl;
        }
        sk.pop();
    }

    return 0;
}