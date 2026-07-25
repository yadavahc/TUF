#include <bits/stdc++.h>
using namespace std;

template<typename It>
string joinRange(It first, It last, const string& sep = ", ") {
    ostringstream oss;
    bool fst = true;
    for (auto it = first; it != last; ++it) {
        if (!fst) oss << sep;
        fst = false;
        oss << *it;
    }
    return oss.str();
}

string vecStr(const vector<int>& v) {
    return "[" + joinRange(v.begin(), v.end()) + "]";
}

void demoSTL(const vector<int>& a, int k) {
    cout << "Original: " << vecStr(a) << "\n";

    // sort ascending
    vector<int> asc = a;
    sort(asc.begin(), asc.end());
    cout << "Sorted asc: " << vecStr(asc) << "\n";

    // sort descending (custom comparator)
    vector<int> desc = a;
    sort(desc.begin(), desc.end(), greater<int>());
    cout << "Sorted desc: " << vecStr(desc) << "\n";

    // unique after sort
    vector<int> uniq = asc;
    uniq.erase(unique(uniq.begin(), uniq.end()), uniq.end());
    cout << "Unique (sorted): " << vecStr(uniq) << "\n";

    // binary_search and lower_bound
    int val = 3;
    bool found = binary_search(asc.begin(), asc.end(), val);
    cout << "binary_search(" << val << "): " << (found ? "true" : "false") << "\n";
    int q = 4;
    auto it = lower_bound(asc.begin(), asc.end(), q);
    cout << "lower_bound(" << q << ") index: " << (int)(it - asc.begin()) << "\n";

    // set (ordered, unique)
    set<int> s(a.begin(), a.end());
    cout << "set (ordered unique): [" << joinRange(s.begin(), s.end()) << "]\n";

    // unordered_map frequency count
    unordered_map<int,int> freq;
    for (int x : a) ++freq[x];
    vector<pair<int,int>> fv(freq.begin(), freq.end());
    sort(fv.begin(), fv.end(), [](const auto& p1, const auto& p2){
        if (p1.second != p2.second) return p1.second > p2.second; // higher freq first
        return p1.first < p2.first; // tie-breaker by value
    });
    cout << "Frequencies (val:count) sorted: [";
    for (size_t i = 0; i < fv.size(); ++i) {
        if (i) cout << ", ";
        cout << fv[i].first << ":" << fv[i].second;
    }
    cout << "]\n";

    // k smallest via min-heap priority_queue
    int kk = min<int>(k, (int)a.size());
    priority_queue<int, vector<int>, greater<int>> minh(a.begin(), a.end());
    vector<int> kSmall;
    for (int i = 0; i < kk; ++i) {
        kSmall.push_back(minh.top());
        minh.pop();
    }
    cout << kk << " smallest (min-heap): " << vecStr(kSmall) << "\n";

    // nth_element for k-th order statistic (1-indexed kk)
    if (kk > 0) {
        vector<int> tmp = a;
        nth_element(tmp.begin(), tmp.begin() + (kk - 1), tmp.end());
        cout << kk << "-th order statistic (nth_element): " << tmp[kk - 1] << "\n";
    }

    // reverse a string using algorithm and using stack
    string str = "Striver";
    string r1 = str; reverse(r1.begin(), r1.end());
    cout << "reverse (algorithm): " << r1 << "\n";
    stack<char> st;
    for (char ch : str) st.push(ch);
    string r2;
    while (!st.empty()) { r2.push_back(st.top()); st.pop(); }
    cout << "reverse (stack): " << r2 << "\n";

    // deque example
    deque<int> dq;
    dq.push_back(2); dq.push_front(1); dq.push_back(3);
    dq.pop_front(); // remove 1
    dq.push_front(0);
    cout << "deque: [" << joinRange(dq.begin(), dq.end()) << "]\n";

    // map example
    map<int,string> mp;
    mp[1] = "one"; mp[2] = "two"; mp[3] = "three";
    cout << "map lookup 2 -> " << mp[2] << ", contains 4? " << (mp.count(4) ? "yes" : "no") << "\n";

    // accumulate
    long long sum = accumulate(a.begin(), a.end(), 0LL);
    cout << "accumulate sum: " << sum << "\n";
}

int main() {
    vector<int> a1 = {5, 1, 3, 3, 2, 8, 5, 7, 6, 2};
    int k1 = 3;
    cout << "=== Demo 1 ===\n";
    demoSTL(a1, k1);

    cout << "\n=== Demo 2 ===\n";
    vector<int> a2 = {10, 9, 8, 7, 7, 6, 5, 4, 3, 2, 1, 0};
    int k2 = 5;
    demoSTL(a2, k2);

    return 0;
}
