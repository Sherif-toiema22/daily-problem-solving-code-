#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void solve() {
    int n;
    while (cin >> n && n != 0) {
        queue<int> deck;
        
        // تعبئة الطابور بالبطاقات من 1 إلى n
        for (int i = 1; i <= n; ++i) {
            deck.push(i);
        }
        
        vector<int> discarded;
        
        // تنفيذ العملية طالما يوجد بطاقتان أو أكثر
        while (deck.size() >= 2) {
            // 1. رمي البطاقة العلوية
            discarded.push_back(deck.front());
            deck.pop();
            
            
            deck.push(deck.front());
            deck.pop();
        }
        
       
        cout << "Discarded cards:";
        for (size_t i = 0; i < discarded.size(); ++i) {
            cout << " " << discarded[i];
            if (i + 1 < discarded.size()) {
                cout << ",";
            }
        }
        cout << "\n";
        
       
        cout << "Remaining card: " << deck.front() << "\n";
    }
}

int main() {
    // تسريع عمليات الإدخال والإخراج
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}