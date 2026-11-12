#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t;
    
    for (int case_num = 1; case_num <= t; ++case_num) {
        int term1, term2, final_exam, attendance;
        int ct1, ct2, ct3;
        
        cin >> term1 >> term2 >> final_exam >> attendance >> ct1 >> ct2 >> ct3;
        
        // وضع درجات الاختبارات الصفية في مصفوفة لسهولة الترتيب
        vector<int> cts = {ct1, ct2, ct3};
        sort(cts.begin(), cts.end()); // ترتيب تصاعدي: أصغر دربتين ثم الأكبر
        
        // أخذ متوسط أفضل اختبارين (العنصرين الثاني والثالث بعد الترتيب)
        double best_two_avg = (cts[1] + cts[2]) / 2.0;
        
        // حساب المجموع الكلي
        double total = term1 + term2 + final_exam + attendance + best_two_avg;
        
        // تحديد التقدير الحرفي بناءً على الشروط
        char grade;
        if (total >= 90) {
            grade = 'A';
        } else if (total >= 80) {
            grade = 'B';
        } else if (total >= 70) {
            grade = 'C';
        } else if (total >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }
        
        // طباعة النتيجة بالشكل المطلوب في عينة المخرجات
        cout << "Case " << case_num << ": " << grade << "\n";
    }
}

int main() {
    // تسريع عمليات الإدخال والإخراج
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}