#include <iostream>
#include <stack>
#include <string>

using namespace std;
#define fast  ios::sync_with_stdio(false), cin.tie(nullptr) , cout.tie(nullptr);
int main() {
    fast;
    int c;
    cin>>c;
    stack<long long> s;
    while (c--){
        int a;
        cin>>a;
        if (a==1)
        {
            long long v;
            cin>>v;
            s.push(v);
        }   
        if (a==2)
        {
            if (!s.empty())
            {
                s.pop();
            }
            /* code */
        }
        if (a==3)
        {
            if (!s.empty())
            {
                cout<<s.top()<<"\n";
            }
            else
            {
                cout<<"Empty!\n";
            }
            
        }   
        
    }
    
    

    return 0;
}