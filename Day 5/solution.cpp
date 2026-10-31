#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>
using namespace std;

int main() {

    string input ;
 
    int i=0;
    while (cin >> input && input[0] != '-') {
           int opened = 0;
    int closed = 0;
    int n = 0;
        i++;
        for (char c : input) {
            if (c =='{')
            {
                opened++;
                /* code */
            }
            if (c =='}')
            {
                if (opened > 0)
                {
                    opened--;
                }
                else
                {
                    closed++;
                }
                /* code */
            }
            
        }
        n= (opened+1)/2 + (closed+1)/2;
        cout<<i<<". "<<n<<endl; 
        // Process the input string
    }

    return 0;
}
