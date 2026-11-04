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
        
        int solution=0;
        
        while (m--)
        {
            int l1;
            int total_length=l*100;
            string p,p2="left";
            cin>>l1>>p;
             // مؤشر لتحديد هل الطابور مقلوب أم لا
            if (p=="right" )
            {
                // مؤشر لتحديد هل الطابور مقلوب أم لا
                solution+=1;
                p2="right";
                total_length-=l1;
            }
            else if (p=="left" && total_length >= 0 && p2==p)
            {
                total_length-=l1;
                p2="left";
            }
            else if (p=="right" && total_length >= 0 && p2==p)
            {
                total_length-=l1;
                p2="right";
            }


            /* code */
        }
        
        /* code */
    }
    

    return 0;
}