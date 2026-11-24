#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void SherifSolves(int n) {
    stack<int> st;
    queue<int> q;
    priority_queue<int> pq;

    bool is_stack = true;
    bool is_queue = true;
    bool is_pq = true;

    for (int i = 0; i < n; ++i) {
        int type, x;
        cin >> type >> x;

        if (type == 1) {
            if (is_stack) st.push(x);
            if (is_queue) q.push(x);
            if (is_pq) pq.push(x);
        } else { // type == 2
            if (is_stack) {
                if (st.empty() || st.top() != x) {
                    is_stack = false;
                } else {
                    st.pop();
                }
            }

            if (is_queue) {
                if (q.empty() || q.front() != x) {
                    is_queue = false;
                } else {
                    q.pop();
                }
            }

            if (is_pq) {
                if (pq.empty() || pq.top() != x) {
                    is_pq = false;
                } else {
                    pq.pop();
                }
            }
        }
    }

    int possible_count = (int)is_stack + (int)is_queue + (int)is_pq;

    if (possible_count == 0) {
        cout << "impossible\n";
    } else if (possible_count > 1) {
        cout << "not sure\n";
    } else if (is_stack) {
        cout << "stack\n";
    } else if (is_queue) {
        cout << "queue\n";
    } else {
        cout << "priority queue\n";
    }
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