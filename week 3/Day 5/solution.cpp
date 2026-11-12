#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // تسريع عمليات الإدخال والإخراج لضمان الكفاءة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long> numbers;
    long long x;

    // قراءة الأرقام واحداً تلو الآخر حتى نهاية الملف (EOF)
    while (cin >> x) {
        numbers.push_back(x);
        
        // ترتيب العناصر في كل مرة لضمان بقاء المصفوفة مرتبة
        sort(numbers.begin(), numbers.end());

        int n = numbers.size();

        if (n % 2 != 0) {
            // إذا كان العدد فردياً، نطبع العنصر الأوسط مباشرة
            cout << numbers[n / 2] << "\n";
        } else {
            // إذا كان العدد زوجياً، نحسب متوسط العنصرين الأوسطين ونأخذ الجزء الصحيح
            long long mid1 = numbers[(n / 2) - 1];
            long long mid2 = numbers[n / 2];
            cout << (mid1 + mid2) / 2 << "\n";
        }
    }

    return 0;
}