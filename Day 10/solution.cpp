#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int c;
    cin>>c;
    stack<int> s;
    while (c--){
        int a;
        cin>>a;
        if (a==1)
        {
            int v;
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