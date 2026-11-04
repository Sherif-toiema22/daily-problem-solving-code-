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
        int total_length=l*100;
        int solution=0;
        string p2="left";
        while (m--)
        {
            int l1;
            
            string p;
            cin>>l1>>p;
             // مؤشر لتحديد هل الطابور مقلوب أم لا
            if (p!=p2 && total_length >= 0)
            {
                solution++;
                total_length-=l1;
                p2=p;
            }
            else if (p==p2 && total_length >= 0 )
            {
                total_length-=l1;
            }
            else if (total_length < 0)
            {
                solution++;
                total_length=l*100-l1;
            }


            /* code */
        }
        cout<<solution<<"\n";
        /* code */
    }
    

    return 0;
}