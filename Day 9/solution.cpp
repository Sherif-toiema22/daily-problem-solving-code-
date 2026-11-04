#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    int c;
    cin>>c;
    while (c--)
    {
        int l,m;
        cin>>l>>m;
        int totaal_length=l*100;
        int solution=0;
        bool is_reversed = false;
        while (m--)
        {
            int l1;
            string p,p2;
            cin>>l1>>p;
             // مؤشر لتحديد هل الطابور مقلوب أم لا
            if (p=="right" && is_reversed == false)
            {
                is_reversed = true; // مؤشر لتحديد هل الطابور مقلوب أم لا
                solution+=1;
                p2="right";
            }
            else if (p=="left" )
            {
                solution+=1;
                p2="left";
            }
            


            /* code */
        }
        
        /* code */
    }
    

    return 0;
}