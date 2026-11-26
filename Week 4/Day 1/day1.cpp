#include <iostream>
#include <vector>

using namespace std;

int best_sum;
vector<int> best_subset;

void backtrack(int idx, int n, const vector<int>& tracks, int cur_sum, vector<int>& cur_subset) {
    if (cur_sum > n) return;

    if (idx == (int)tracks.size()) {
        if (cur_sum > best_sum) {
            best_sum = cur_sum;
            best_subset = cur_subset;
        }
        return;
    }

    // خيار 1: تضمين التراك الحالي
    if (cur_sum + tracks[idx] <= n) {
        cur_subset.push_back(tracks[idx]);
        backtrack(idx + 1, n, tracks, cur_sum + tracks[idx], cur_subset);
        cur_subset.pop_back();
    }

    // خيار 2: عدم تضمين التراك الحالي
    backtrack(idx + 1, n, tracks, cur_sum, cur_subset);
}

void SherifSolves(int n) {
    int t;
    cin >> t;

    vector<int> tracks(t);
    for (int i = 0; i < t; ++i) {
        cin >> tracks[i];
    }

    best_sum = -1;
    best_subset.clear();
    vector<int> cur_subset;

    backtrack(0, n, tracks, 0, cur_subset);

    for (int i = 0; i < (int)best_subset.size(); ++i) {
        cout << best_subset[i] << " ";
    }
    cout << "sum:" << best_sum << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (cin >> n) {
        SherifSolves(n);
    }

    return 0;
}