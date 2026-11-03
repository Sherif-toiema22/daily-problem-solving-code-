#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    // تسريع عمليات الإدخال والإخراج لضمان عدم تجاوز الوقت
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    if (!(cin >> q)) return 0;

    deque<int> dq;
    bool is_reversed = false; // مؤشر لتحديد هل الطابور مقلوب أم لا

    while (q--) {
        string cmd;
        cin >> cmd;

        if (cmd == "back") {
            if (dq.empty()) {
                cout << "No job for Ada?\n";
            } else {
                int val;
                if (!is_reversed) {
                    val = dq.back();
                    dq.pop_back();
                } else {
                    val = dq.front();
                    dq.pop_front();
                }
                cout << val << "\n";
            }
        } 
        else if (cmd == "front") {
            if (dq.empty()) {
                cout << "No job for Ada?\n";
            } else {
                int val;
                if (!is_reversed) {
                    val = dq.front();
                    dq.pop_front();
                } else {
                    val = dq.back();
                    dq.pop_back();
                }
                cout << val << "\n";
            }
        } 
        else if (cmd == "reverse") {
            // بدلاً من قلب عناصر الـ deque فعلياً (تأخذ وقت O(N))
            // نقوم فقط بعكس قيمة المؤشر بزمن O(1) !
            is_reversed = !is_reversed;
        } 
        else if (cmd == "push_back") {
            int n;
            cin >> n;
            if (!is_reversed) {
                dq.push_back(n);
            } else {
                dq.push_front(n); // إذا كان مقلوباً، الإضافة للخلف تعني إضافتها للأمام فعلياً
            }
        } 
        else if (cmd == "toFront") {
            int n;
            cin >> n;
            if (!is_reversed) {
                dq.push_front(n);
            } else {
                dq.push_back(n); // إذا كان مقلوباً، الإضافة للأمام تعني إضافتها للخلف فعلياً
            }
        }
    }

    return 0;
}