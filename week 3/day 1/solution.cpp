#include <iostream>
#include <map>

using namespace std;

int main() {
    // تسريع عمليات الإدخال والإخراج لضمان الكفاءة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    // استخدام الخريطة (map) لحفظ تكرار كل عنصر حتى لو كانت قيمته كبيرة جداً (تصل إلى 10^9)
    map<long long, long long> freq;
    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        freq[x]++;
    }

    long long deletions = 0;

    // المرور على كل عنصر وتكراره لحساب العناصر الواجب حذفها
    for (auto& pair : freq) {
        long long num = pair.first;   // الرقم نفسه
        long long count = pair.second; // عدد مرات تكراره

        if (count >= num) {
            // إذا تكرر أكثر من قيمته، نحذف الزيادة فقط
            deletions += (count - num);
        } else {
            // إذا تكرر أقل من قيمته، نحذفه بالكامل
            deletions += count;
        }
    }

    cout << deletions << "\n";

    return 0;
}