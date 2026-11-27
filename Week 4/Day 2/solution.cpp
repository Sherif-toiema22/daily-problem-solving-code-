#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
// 7
// 4 2 10
// 3 1 4 2
// 3 3 100
// 10 20 30

// 20 100
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long arr[a];
        for (int i = 0; i < a; ++i) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        long long juiceSum = 0;
        int i = 0;

        while (i + b <= a) {
            long long fresh_sum = 0;
            for (int j = 0; j < b; ++j) {
                fresh_sum += arr[i + j];
            }

            juiceSum += max(c, fresh_sum);
            i += b;
        }

        while (i < a) {
            juiceSum += arr[i];
            ++i;
        }

        cout << juiceSum << '\n';
    }

    return 0;
}